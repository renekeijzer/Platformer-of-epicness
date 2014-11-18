#include "MapLoader.hpp"

MapLoader* MapLoader::instance = nullptr;

MapLoader* MapLoader::get(){
	if (!instance){
		instance = new MapLoader;
		instance->parseXml();
	}
	return instance;
}

void MapLoader::parseXml(){
	std::ifstream levelMapping("Recources\\Levels.dat");
	char ch;
	char buffer[65536];
	size_t chars_read = 0;

	while (levelMapping.get(ch) && (chars_read < 65535)){
		buffer[chars_read++] = ch;
	}
	buffer[chars_read++] = '\0';
	rapidxml::xml_document<> map;
	map.parse<0>(buffer);
	
	rapidxml::xml_node<> *startMapping = map.first_node("levels")->first_node();
	try{
		while (startMapping != 0){
			int id = atoi(startMapping->first_attribute("id")->value());
			
			level tmpLevel;
			tmpLevel.source = startMapping->first_attribute("source")->value();
			tmpLevel.data = "";
			tmpLevel.spritesheet = startMapping->first_attribute("spritesheet")->value();
			tmpLevel.next = nullptr;

			if (id != 1){ levels[id - 1]->next = &tmpLevel; }
			levels[id] = &tmpLevel;

			startMapping = startMapping->next_sibling();
		}
	}
	catch (rapidxml::parse_error &ex){
		std::cout << ex.what();
	}
	levelMapping.close();
}

void MapLoader::createMap(Screen* screen){
	
		if (!current){ 
			current = levels[1]; 
		}
		else
		{
			current = current->next;
		}

		std::ifstream levelFile(current->source);
		char ch;
		char buffer[65536];
		size_t chars_read = 0;

		while (levelFile.get(ch) && (chars_read < 65535)){
			buffer[chars_read++] = ch;
		}
		buffer[chars_read++] = '\0';

		rapidxml::xml_document<> map;
		map.parse<0>(buffer);
		rapidxml::xml_node<> *startMapping = map.first_node("map")->first_node();
		while (startMapping != 0){
			break;
		}
		std::cout << buffer;
}

std::vector<std::string> MapLoader::explode(const std::string& str, const char& ch) {
	std::string next;
	std::vector<std::string> result;

	// For each character in the string
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		// If we've hit the terminal character
		if (*it == ch) {
			// If we have some characters accumulated
			if (!next.empty()) {
				// Add them to the result vector
				result.push_back(next);
				next.clear();
			}
		}
		else {
			// Accumulate the next character into the sequence
			next += *it;
		}
	}
	if (!next.empty())
		result.push_back(next);
	return result;
}

MapLoader::~MapLoader(){}

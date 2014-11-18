
#pragma once
#include <map>
#include <vector>
#include "Screen.hpp"
#include "GameScreen.hpp"
#include <iostream>
#include <fstream>
#include "rapidxml.hpp"
#include "rapidxml_iterators.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml_print.hpp"
#include <string>
#include "Layer.hpp"
#include <SFML\Graphics.hpp>
#include <vector>
#include "TextureManager.hpp"



class GameScreen;

//! \brief This class will make all the tilecomponents for the levels
class MapLoader{
public:
	static MapLoader* get();


	//! \brief Will add all tiles to components list, and will be drawn when game loop is initiated
	//! \param screen screen on which the objects will be added
	void createMap(Screen* screen);

	//! \brief Resets all values to their defualt values
	void resetLevelNr();
	~MapLoader();

private:
	//! \brief initiating maploader
	MapLoader(){};

	//! \brief Will fill the tileMapping with <id, passable>
	void parseXml();

	//! \brief works like php explode
	//! \param str string to explode
	//! \param ch delimeter character
	std::vector<std::string> MapLoader::explode(const std::string& str, const char& ch);

	std::map<int, std::string> tileMapping;
	int tileWidth, tileHeight, spritesheetWidth, spritesheetHeight;
	
	static MapLoader* instance;
	typedef struct level{ std::string source; std::string spritesheet; std::string data; struct level* next; }level;
	std::map<int, struct level*> levels;
	level * current = nullptr;

};


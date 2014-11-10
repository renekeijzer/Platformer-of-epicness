#include "ScreenManager.hpp"

ScreenManager* ScreenManager::instance = nullptr;

ScreenManager* ScreenManager::getInstance(){
	if (!instance){
		instance = new ScreenManager;
	}
	return instance;
}

void ScreenManager::add(Screen *s){
	screens.push_back(s);
}

void ScreenManager::remove(int position){
	//wait with implementing this
}

void ScreenManager::clear(){
	screens.clear();
}

void ScreenManager::update(){
	for (Screen* screen : screens){
		if (screen->isActive()) {
			screen->update();
		}
	}
}

void ScreenManager::draw(sf::RenderWindow & window){
	for (Screen* screen : screens){
		if (screen->isActive()) {
			screen->draw(window);
		}
	}
}

Screen* ScreenManager::find(std::string name) {
	for (Screen* screen : screens){
		if (screen->getName() == name) {
			return screen;
		}
	}
	return nullptr;
}

ScreenManager::ScreenManager(){}
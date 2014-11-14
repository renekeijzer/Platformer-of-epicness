#include "GameScreen.hpp"


GameScreen::GameScreen(std::string name) : Screen(name)
{
}

static Screen* create(std::string name){
	if (ScreenManager::getInstance()->find(name) != nullptr){
		return ScreenManager::getInstance()->find(name);
	}
	return new GameScreen(name);
}

void GameScreen::update(sf::Time gameTime){

}

void GameScreen::draw(sf::RenderWindow & window){
}


GameScreen::~GameScreen()
{
}

#include "GameScreen.hpp"


GameScreen::GameScreen(std::string name) : Screen(name)
{
}

Screen* GameScreen::create(std::string name){
	if (ScreenManager::getInstance()->find(name) != nullptr){
		return ScreenManager::getInstance()->find(name);
	}
	return new GameScreen(name);
}

void GameScreen::update(sf::Time gameTime){
	for (Layer * layer : mapping)
	{
		if (layer->isActive()){
			layer->Update(gameTime);
		}
	}
}

void GameScreen::draw(sf::RenderWindow & window){
	for (Layer * layer : mapping)
	{
		if (layer->isActive()){
			layer->Draw(window);
		}
	}
}


GameScreen::~GameScreen()
{
}

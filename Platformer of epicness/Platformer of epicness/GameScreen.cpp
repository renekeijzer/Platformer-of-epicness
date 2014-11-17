#include "GameScreen.hpp"


GameScreen::GameScreen(std::string name) : Screen(name)
{
}

Screen* GameScreen::create(std::string name, bool active){
	if (ScreenManager::getInstance()->find(name) != nullptr){
		return ScreenManager::getInstance()->find(name);
	}

	Screen * gs = new GameScreen(name);
	gs->setActive(active);
	
	ScreenManager::getInstance()->add(gs);
	return gs;
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

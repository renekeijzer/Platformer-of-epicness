#include "GameScreen.hpp"


GameScreen::GameScreen(std::string name) : Screen(name)
{
}

static GameScreen* create(){
	GameScreen * gs = new GameScreen("GameScreen");
	
	

}

void GameScreen::update(sf::Time gameTime){

}

void GameScreen::draw(sf::RenderWindow & window){
}


GameScreen::~GameScreen()
{
}

#include "Game.hpp"


Game::Game()
{
	run();
}


Game::~Game()
{
}

void Game::run(){
	sf::RenderWindow window(sf::VideoMode(800, 600), "Platformer of epicness");
	Screen * gs = GameScreen::create("gamescreen", true);
	Layer * layer = new DynamicLayer();
	
	PlayerEntity * playerEntity = new PlayerEntity(sf::Rect<float>(32, 32, 32, 32));
	playerController * controller = new playerController(playerEntity);

	layer->Add(playerEntity);
	gs->add(layer);
	


	window.setFramerateLimit(60);
	while (window.isOpen()){
		sf::Event event;
		window.clear();

		ScreenManager::getInstance()->update(gameTime.getElapsedTime());
		ScreenManager::getInstance()->draw(window);

		window.display();
		while (window.pollEvent(event)){
			if (event.type == sf::Event::Closed){
				window.close();
			}
		}
	}
}

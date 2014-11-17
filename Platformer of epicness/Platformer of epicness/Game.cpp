#include "Game.hpp"


Game::Game()
{
	run();
}


Game::~Game()
{
}

void Game::run(){
	sf::Clock gameTime;
	sf::RenderWindow window(sf::VideoMode(800, 600), "Platformer of epicness");
	Screen *gs = GameScreen::create("gamescreen");
	Layer * layer = new DynamicLayer();
	
	PlayerEntity * playerEntity = new PlayerEntity(sf::Rect<float>(32, 32, 32, 32));
	PlayerRepresentation * playerRep = new PlayerRepresentation();
	playerEntity->setRepresentation(playerRep);
	playerController * controller = new playerController(playerEntity);

	layer->Add(playerEntity);
	gs->add(layer);
	gs->setActive(true);
	ScreenManager::getInstance()->add(gs);



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

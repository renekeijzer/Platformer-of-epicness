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
	GameScreen *gs = GameScreen::create("gamescreen");

	


	window.setFramerateLimit(60);
	while (window.isOpen()){
		sf::Event event;
		window.clear();
		window.display();

		while (window.pollEvent(event)){
			if (event.type == sf::Event::Closed){
				window.close();
			}
		}
	}
}

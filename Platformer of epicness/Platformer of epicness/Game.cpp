#include "Game.hpp"
#include "MapLoader.hpp"


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

	ChunkEntity * ch = new ChunkEntity();
	ch->addPoint(100, 100);
	ch->addPoint(120, 120);
	ch->addPoint(200, 128);
	ch->addPoint(180, 200);

	layer->Add(ch);


	MapLoader::get()->createMap(gs);
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

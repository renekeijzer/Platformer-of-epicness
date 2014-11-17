#include "playerController.hpp"


playerController::playerController()
{
}

playerController::playerController(MovableEntity * ent): Controller(ent){
	
}

void playerController::poll(){
	const struct { sf::Keyboard::Key key; float x; float y; } actions[] = {
		{ sf::Keyboard::A, -2, 0.0, },
		{ sf::Keyboard::D, 2, 0.0,},
		{ sf::Keyboard::W, 0.0, -2, },
		{ sf::Keyboard::S, 0.0, 2, }
	};

	//actualy move the component
	for (const auto & action : actions){
		if (sf::Keyboard::isKeyPressed(action.key)){
			std::cout << action.key;
			controlEntity->setVelocity(action.x, action.y);
		}
	}
}

playerController::~playerController()
{
}

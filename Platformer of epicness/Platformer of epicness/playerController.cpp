#include "playerController.hpp"


playerController::playerController()
{
}

playerController::playerController(MovableEntity * ent): Controller(ent){
	
}

void playerController::poll(){
	std::cout << "test";
}

playerController::~playerController()
{
}

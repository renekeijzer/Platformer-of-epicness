#include "Controller.hpp"


Controller::Controller()
{
}

Controller::Controller(MovableEntity * ent) : controlEntity(ent){}

void Controller::poll(){

}
MovableEntity* Controller::getEntity(){
	return controlEntity;

}

void Controller::setEntity(MovableEntity * ent){
	controlEntity = ent;
}

Controller::~Controller()
{
}

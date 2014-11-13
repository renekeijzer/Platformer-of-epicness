#include "Controller.hpp"


Controller::Controller()
{
}

Controller::Controller(Entity * ent) : controlEntity(ent){}

void Controller::poll(){

}


void Controller::setEntity(Entity * ent){
	controlEntity = ent;
}

Controller::~Controller()
{
}

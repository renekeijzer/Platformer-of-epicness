#pragma once
#include "MovableEntity.hpp"
class MovableEntity;
class Controller
{
public:
	Controller();
	Controller(MovableEntity * ent);

	void setEntity(MovableEntity* ent);
	MovableEntity* getEntity();
	virtual void poll();
	~Controller();
protected:
	MovableEntity* controlEntity = nullptr;

};


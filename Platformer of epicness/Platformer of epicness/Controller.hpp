#pragma once
#include "Entity.hpp"
class Controller
{
public:
	Controller();
	Controller(Entity* ent);

	void setEntity(Entity* ent);
	virtual void poll();
	~Controller();
protected:
	Entity* controlEntity;

};


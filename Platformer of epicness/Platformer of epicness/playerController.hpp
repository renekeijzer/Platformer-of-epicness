#pragma once
#include "Controller.hpp"
#include "Entity.hpp"
class playerController :
	public Controller
{
public:
	playerController();
	playerController(MovableEntity * ent);
	void poll();
	~playerController();
};


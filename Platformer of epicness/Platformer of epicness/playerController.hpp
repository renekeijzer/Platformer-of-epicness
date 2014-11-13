#pragma once
#include "Controller.hpp"
#include "Entity.hpp"
class playerController :
	public Controller
{
public:
	playerController();
	playerController(Entity * ent);

	~playerController();
};


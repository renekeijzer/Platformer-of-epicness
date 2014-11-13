#pragma once
#include "MovableEntity.hpp"
class PlayerEntity : MovableEntity
{
public:
	PlayerEntity();
	PlayerEntity(sf::Rect <float> cr);
	~PlayerEntity();
};


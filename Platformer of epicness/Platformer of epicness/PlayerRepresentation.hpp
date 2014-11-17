#pragma once
#include <iostream>
#include "EntityRepresentation.hpp"
class PlayerRepresentation :
	public EntityRepresentation
{
public:
	PlayerRepresentation();
	~PlayerRepresentation();
	void Draw(sf::RenderWindow & window);
};


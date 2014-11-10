#pragma once
#include <SFML\Graphics.hpp>
#include "EntityRepresentation.hpp"
class Entity
{
public:
	Entity();
	~Entity();
	virtual void Draw(sf::RenderWindow& window);
	virtual void Update(sf::Time gameTime) = 0;
protected:
	EntityRepresentation representation;
};


#pragma once
#include <SFML\Graphics.hpp>
class EntityRepresentation
{
public:
	EntityRepresentation();
	~EntityRepresentation();
	void setPosition(sf::Vector2f pos);
	void setSize(int x, int y);
	void setSize(sf::Vector2f size);
	virtual void Draw(sf::RenderWindow & window);
protected:
	sf::RectangleShape representation;
};


#pragma once
#include <iostream>
#include "EntityRepresentation.hpp"
class PlayerRepresentation :
	public EntityRepresentation
{
public:
	PlayerRepresentation();
	~PlayerRepresentation();
	void setPosition(sf::Vector2f pos);
	void setSize(int x, int y);
	void setSize(sf::Vector2f size);
	void setTexture(sf::Texture * text);
	sf::Vector2f getPosition();
	void Draw(sf::RenderWindow & window);
private:
	sf::RectangleShape representation;
};


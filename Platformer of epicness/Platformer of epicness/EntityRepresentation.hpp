#pragma once
#include <SFML\Graphics.hpp>
#include "Animator.hpp"
class EntityRepresentation
{
public:
	EntityRepresentation();
	~EntityRepresentation();
	
	void setPosition(sf::Vector2f pos);
	void setSize(int x, int y);
	void setSize(sf::Vector2f size);
	void setTexture(sf::Texture * text);

	virtual void Draw(sf::RenderWindow & window);
protected:
	sf::RectangleShape representation;
	sf::Texture displayText;
	Animator animator;
};


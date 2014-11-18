#pragma once
#include <SFML\Graphics.hpp>
#include "Animator.hpp"
class EntityRepresentation
{
public:
	EntityRepresentation();
	~EntityRepresentation();
	
	virtual void setPosition(sf::Vector2f pos)		= 0;
	virtual void setSize(int x, int y)				= 0;
	virtual void setSize(sf::Vector2f size)			= 0;
	virtual void setTexture(sf::Texture * text)		= 0;
	virtual sf::Vector2f getPosition()				= 0;
	virtual void Draw(sf::RenderWindow & window)	= 0;
	void setFocus(bool f);
protected:
	Animator animator;
	bool focus;
};


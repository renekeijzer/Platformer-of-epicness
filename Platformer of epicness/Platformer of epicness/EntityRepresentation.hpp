#pragma once
#include <SFML\Graphics.hpp>
#include "Animator.hpp"
#include <iostream>
class EntityRepresentation
{
public:
	EntityRepresentation();
	~EntityRepresentation();
	
	virtual void setPosition(sf::Vector2f pos)		;
	virtual void setSize(int x, int y)				;
	virtual void setSize(sf::Vector2f size)			;
	virtual void setTexture(sf::Texture * text)		;
	//! abstract method getPosition
	//! this method needs to be implemented in all representation files if you're gonna use it
	//! return if(!implemented){sf::vector(0,0)} 
	virtual sf::Vector2f getPosition()				;
	virtual void Draw(sf::RenderWindow & window)	= 0;
	void setFocus(bool f);
protected:
	Animator animator;
	bool focus;
};


#include "EntityRepresentation.hpp"


EntityRepresentation::EntityRepresentation()
{
	
}


void EntityRepresentation::setFocus(bool f){
	focus = f;
}

void EntityRepresentation::setPosition(sf::Vector2f pos){}
void EntityRepresentation::setSize(int x, int y){}
void EntityRepresentation::setSize(sf::Vector2f size){}
void EntityRepresentation::setTexture(sf::Texture * text){}
sf::Vector2f EntityRepresentation::getPosition(){ 
	std::cout << "\tUsing an unplemented method check EntityRepresentation.hpp ln 15 for documentation\r\n";
	return sf::Vector2f(0,0); }


void EntityRepresentation::Draw(sf::RenderWindow & window){


}
EntityRepresentation::~EntityRepresentation()
{
}

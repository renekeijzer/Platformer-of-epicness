#include "EntityRepresentation.hpp"


EntityRepresentation::EntityRepresentation()
{
	
}
void EntityRepresentation::setTexture(sf::Texture* text){
	representation.setFillColor(sf::Color::Transparent);
	representation.setTexture(text);
}
void EntityRepresentation::Draw(sf::RenderWindow & window){}
EntityRepresentation::~EntityRepresentation()
{
}

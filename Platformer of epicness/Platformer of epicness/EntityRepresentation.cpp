#include "EntityRepresentation.hpp"


EntityRepresentation::EntityRepresentation()
{
	
}
void EntityRepresentation::setTexture(sf::Texture* text){
	representation.setFillColor(sf::Color::Transparent);
	representation.setTexture(text);
}

void EntityRepresentation::setSize(sf::Vector2f size){
	representation.setSize(size);
}

void EntityRepresentation::setPosition(sf::Vector2f pos){
	representation.setPosition(pos);
}

void EntityRepresentation::setFocus(bool f){
	focus = f;
}


sf::Vector2f EntityRepresentation::getPosition(){ return representation.getPosition(); }

void EntityRepresentation::Draw(sf::RenderWindow & window){
	if (focus){
		sf::View tmp = window.getView();
		tmp.setCenter(representation.getPosition().x - representation.getSize().x / 2, representation.getPosition().y - representation.getSize().y / 2);
		window.setView(tmp);
	}

}
EntityRepresentation::~EntityRepresentation()
{
}

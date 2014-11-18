#include "PlayerRepresentation.hpp"


PlayerRepresentation::PlayerRepresentation()
{
	representation.setFillColor(sf::Color::White);
	representation.setPosition(0, 0);
	representation.setSize(sf::Vector2<float>(32, 32));
}

void PlayerRepresentation::Draw(sf::RenderWindow & window){
	if (focus){
		sf::View tmp = window.getView();
		tmp.setCenter(representation.getPosition().x + representation.getSize().x / 2, representation.getPosition().y + representation.getSize().y / 2);
		window.setView(tmp);
	}
		
	window.draw(representation); 
}
void PlayerRepresentation::setTexture(sf::Texture* text){
	representation.setFillColor(sf::Color::Transparent);
	representation.setTexture(text);
}

void PlayerRepresentation::setSize(sf::Vector2f size){
	representation.setSize(size);
}
void PlayerRepresentation::setSize(int x, int y){
	representation.setSize(sf::Vector2f((int)x, (int)y));
}

void PlayerRepresentation::setPosition(sf::Vector2f pos){
	representation.setPosition(pos);
}
sf::Vector2f PlayerRepresentation::getPosition(){ return representation.getPosition(); }


PlayerRepresentation::~PlayerRepresentation()
{
}

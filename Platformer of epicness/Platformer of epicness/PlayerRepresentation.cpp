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


PlayerRepresentation::~PlayerRepresentation()
{
}

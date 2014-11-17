#include "PlayerEntity.hpp"


PlayerEntity::PlayerEntity()
{
}

PlayerEntity::PlayerEntity(sf::Rect<float> cr) : MovableEntity(cr){
	representation = new PlayerRepresentation();
	representation->setPosition(sf::Vector2f(cr.left, cr.top));
	representation->setSize(sf::Vector2f(cr.width, cr.width));
	representation->setFocus(true);
}

void PlayerEntity::Update(sf::Time gameTime){
	if (entityController){
	if (entityController->getEntity() != nullptr){
		entityController->poll();
	}
	else{
		entityController->setEntity(this);
	}
}
}

void PlayerEntity::Draw(sf::RenderWindow & window){
	representation->Draw(window);
}


PlayerEntity::~PlayerEntity()
{
}

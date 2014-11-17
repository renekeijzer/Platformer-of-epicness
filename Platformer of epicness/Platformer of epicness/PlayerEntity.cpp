#include "PlayerEntity.hpp"


PlayerEntity::PlayerEntity()
{
}

PlayerEntity::PlayerEntity(sf::Rect<float> cr) : MovableEntity(cr){
	representation = new PlayerRepresentation();
	representation->setPosition(sf::Vector2f(cr.left, cr.top));
	representation->setSize(sf::Vector2f(cr.width, cr.width));
	representation->setFocus(false);
}

void PlayerEntity::Update(sf::Time gameTime){
	std::cout << Velocity.x;
	if (entityController){
		if (entityController->getEntity() != nullptr){
			entityController->poll();
			representation->setPosition(representation->getPosition() + Velocity);
		}
		else
		{
			entityController->setEntity(this);
		}
	}
	else
	{
		entityController = new playerController();
	}
}

void PlayerEntity::Draw(sf::RenderWindow & window){
	representation->Draw(window);
}


PlayerEntity::~PlayerEntity()
{
}

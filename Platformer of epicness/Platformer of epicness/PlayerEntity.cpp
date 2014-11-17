#include "PlayerEntity.hpp"


PlayerEntity::PlayerEntity()
{
}

PlayerEntity::PlayerEntity(sf::Rect<float> cr) : MovableEntity(cr){

}

void PlayerEntity::Update(sf::Time gameTime){
	entityController.poll();
}

void PlayerEntity::Draw(sf::RenderWindow & window){
	representation->Draw(window);
}


PlayerEntity::~PlayerEntity()
{
}

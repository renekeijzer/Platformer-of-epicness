#include "MovableEntity.hpp"


MovableEntity::MovableEntity()
{
}

MovableEntity::MovableEntity(sf::Rect<float> cr) : Entity(cr){
}

void MovableEntity::Update(sf::Time gameTime){
	entityController->poll();

}
void MovableEntity::Draw(sf::RenderWindow & window){
	representation->Draw(window);
}

void MovableEntity::setVelocity(float x, float y){
	Velocity.x = x;
	Velocity.y = y;
}

MovableEntity::~MovableEntity()
{
}

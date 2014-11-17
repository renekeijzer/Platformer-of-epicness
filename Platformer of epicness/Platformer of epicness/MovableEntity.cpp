#include "MovableEntity.hpp"


MovableEntity::MovableEntity()
{
	//entityController->setEntity(this);
}

MovableEntity::MovableEntity(sf::Rect<float> cr) : Entity(cr){
	//entityController->setEntity(this);
}

void MovableEntity::Update(sf::Time gameTime){
	entityController->poll();
}
void MovableEntity::Draw(sf::RenderWindow & window){
	representation->Draw(window);
}

MovableEntity::~MovableEntity()
{
}

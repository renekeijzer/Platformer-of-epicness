#include "MovableEntity.hpp"


MovableEntity::MovableEntity()
{
	entityController.setEntity(this);
}

MovableEntity::MovableEntity(sf::Rect<float> cr) : collisionRect(cr){
	entityController.setEntity(this);
}

MovableEntity::~MovableEntity()
{
}

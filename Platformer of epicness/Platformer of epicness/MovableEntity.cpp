#include "MovableEntity.hpp"


MovableEntity::MovableEntity()
{
	entityController.setEntity(this);
}

MovableEntity::MovableEntity(sf::Rect<float> cr) : Entity(cr){
	entityController.setEntity(this);
}

MovableEntity::~MovableEntity()
{
}

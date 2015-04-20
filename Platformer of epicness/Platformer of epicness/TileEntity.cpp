#include "TileEntity.hpp"


TileEntity::TileEntity()
{

}
TileEntity::TileEntity(sf::Rect<float> cr) : Entity(cr){
	representation = new TileRepresentation(sf::Vector2<float>(cr.left, cr.top), sf::Vector2<float>(cr.width, cr.height));
	representation->setFocus(false);
}

void TileEntity::Draw(sf::RenderWindow & window){
	representation->Draw(window);
}

TileEntity::~TileEntity()
{
}

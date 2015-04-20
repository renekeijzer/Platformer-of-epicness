#pragma once
#include "Entity.hpp"
#include "TileRepresentation.hpp"
class TileEntity :
	public Entity
{
public:
	TileEntity();
	TileEntity(sf::Rect<float> cr);
	void Draw(sf::RenderWindow& window);
	void Update(sf::Time gameTime);
	~TileEntity();
};


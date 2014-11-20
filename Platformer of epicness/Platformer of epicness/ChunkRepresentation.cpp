#include "ChunkRepresentation.hpp"


ChunkRepresentation::ChunkRepresentation()
{
}


ChunkRepresentation::~ChunkRepresentation()
{
}

void ChunkRepresentation::updateVertex(){
	for each (VertexPoint* VP in pointList)
	{
		drawList.append(VP->getPoint());
	}
}


void ChunkRepresentation::Draw(sf::RenderWindow & window)
{
	if (!update){
		window.draw(drawList);
	}
	else{
		updateVertex();
	}
}


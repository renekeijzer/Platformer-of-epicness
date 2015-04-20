#include "ChunkRepresentation.hpp"


ChunkRepresentation::ChunkRepresentation()
{
	drawList.setPrimitiveType(sf::TrianglesFan);
}


ChunkRepresentation::~ChunkRepresentation()
{
}

void ChunkRepresentation::updateVertex(std::vector<VertexPoint *> pointList){
	for each (VertexPoint* VP in pointList)
	{
		drawList.append(VP->getPoint());
	}
}


void ChunkRepresentation::Draw(sf::RenderWindow & window)
{
		window.draw(drawList);
}


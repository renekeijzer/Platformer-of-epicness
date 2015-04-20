#include "ChunkEntity.hpp"


ChunkEntity::ChunkEntity()
{
	representation = new ChunkRepresentation();
	
}


ChunkEntity::~ChunkEntity()
{
}


void ChunkEntity::addPoint(int x, int y){
	VertexPoint * tmp = new VertexPoint(sf::Vector2f((float)x, (float)y));
	addPoint(tmp);
}
void ChunkEntity::addPoint(sf::Vector2f pos){
	VertexPoint * tmp = new VertexPoint(pos);
	addPoint(tmp);
}
void ChunkEntity::addPoint(VertexPoint * pt){
	if (pointList.size() != 0){
		VertexPoint *last = pointList.back();
		VertexPoint* front = pointList.front();
		if (front || last){
			pointList.push_back(pt);
		}
		else{
			pt->setPrev(last);
			last->setNext(pt);
			pt->setNext(front);
			pointList.push_back(pt);
		}
		ChunkRepresentation* rep = static_cast<ChunkRepresentation*>(representation);
		if (rep != nullptr){
			rep->updateVertex(pointList);
		}
	}
	else
	{
		pointList.push_back(pt);
	}
}

void ChunkEntity::Update(sf::Time gameTime)
{
}


void ChunkEntity::Draw(sf::RenderWindow& window)
{
	representation->Draw(window);
}

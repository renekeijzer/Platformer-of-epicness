#pragma once
#include "SFML\Graphics.hpp"
class VertexPoint
{
public:
	VertexPoint();
	VertexPoint(sf::Vector2f pos, VertexPoint * pre = nullptr, VertexPoint * nxt = nullptr) : position(pos), prev(pre), next(nxt){
		point.position = position;
	};
	void setNext(VertexPoint * nxt)		{ next = nxt; }
	void setPrev(VertexPoint * pre)		{ prev = pre; }
	void setPosition(sf::Vector2f pos)	{ position = pos; }
	void setPoint(sf::Vertex pnt)		{ point = pnt; }


	VertexPoint* getNext()				{ return next; }
	VertexPoint* getPrev()				{ return prev; }
	sf::Vector2f getPosition()			{ return position; }
	sf::Vertex getPoint()				{ return point; }

	~VertexPoint();
private:
	VertexPoint * next;
	VertexPoint * prev;
	sf::Vector2f position;
	sf::Vertex point;

};


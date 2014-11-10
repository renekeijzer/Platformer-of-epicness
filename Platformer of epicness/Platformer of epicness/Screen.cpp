#include "Screen.hpp"

Screen::Screen(std::string name) :
name{ name }
{}

bool Screen::isActive(){
	return active;
}

void Screen::setActive(bool set){
	active = set;
}

std::string Screen::getName() {
	return name;
}

void Screen::add(GameComponent *gc){}

void Screen::remove(GameComponent *gc){}

void Screen::update(){}

void Screen::draw(sf::RenderWindow & window){}

Screen::~Screen(){}
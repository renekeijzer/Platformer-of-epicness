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

void Screen::add(Layer *gc){}

void Screen::remove(Layer *gc){}

void Screen::update(sf::Time gameTime){}

void Screen::draw(sf::RenderWindow & window){}

Screen::~Screen(){}
//#############################################################################
//#
//# Project tyndrr
//#
//# (c) tyndrr (Robbin van den berg, Rene Keijzer,
//#			  Danny Horvath, Yorrick Lans, Tony Hengeveld) 2014
//# 
//#############################################################################

#pragma once
#include <stddef.h>
#include "GameComponent.hpp"
#include <SFML\Graphics.hpp>
#include "Screen.hpp"
#include <list>

class ScreenManager{
public:
	//ScreenManager::~ScreenManager();

	//! \brief Singleton
	static ScreenManager* getInstance();

	//! \brief Adding a Screen with this method will result in a Sreen that will be updated and drawn
	//! \param s sreen to add
	void add(Screen *s);

	//! \brief Removes a Sreen from the update and draw loop
	//! \param s screen to remove
	void remove(Screen * s);

	//! \brief Removes a GameComponent at position x
	//! \param position the position of the component
	void remove(int position);

	//! \brief Clears the update/draw list, should be called every level swap
	void clear();

	//! \brief Update method will be used on all the game components, 
	//! \brief if bool remove is true also removes objects and pointers
	void update();

	//! \brief Draw method will be used to draw every gamecomponent in the component list
	//! \param window the window to draw to
	void draw(sf::RenderWindow & window);

	//! \brief Find a screen by name
	//! \param Screen name
	Screen* find(std::string name);

private:
	//!\brief Pointer of singleton object
	static ScreenManager* instance;

	//! \brief Component list
	std::vector<Screen * > screens;

	//! \brief private constructor
	ScreenManager();

	//! \brief Copy constructor this shouldn't be implemented
	ScreenManager(ScreenManager const&){};

	//! \brief =opperator this shouldn't be implemented for singleton's sake
	ScreenManager& operator=(ScreenManager const &){};
};
#pragma once
#include <SFML\Graphics.hpp>
#include "GameComponent.hpp"
#include <list>

class Screen{
public:
	//! \brief Constructor of Screen
	//! \param name will be used as identifier for the screen
	Screen(std::string name);

	//! \brief Returns active
	//! \return if screen is active returns true else false
	bool isActive();

	//! \brief Sets active to x
	void setActive(bool set);

	//! \brief Adds a new GameComponent
	//! \param gc the component to add
	virtual void add(GameComponent *gc);

	//! \brief Removes an existing GameComponent
	//! \param gc the component to remove
	virtual void remove(GameComponent *gc);

	//! \brief Update will handle the business logic
	virtual void update();

	//! \brief Draw will handle all the draw logic of the component
	//! \param window the window to draw to
	virtual void draw(sf::RenderWindow & window);

	//! \brief Get the name of the screen
	std::string getName();

	//! \ brief Destructor of Screen
	~Screen();

private:
	//! \brief attribute to state if the object is active or not
	bool active;
	std::string name;
	sf::View mainView;
};

#endif
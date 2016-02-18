#pragma once

#include "GI.h"
#include "Menu.h"
#include "SFMLI.h"
#include "Vector.h"
#include "InputManager.h"



class TexBar {
public:
	TexBar() {

	}

	~TexBar() {

	}

	sf::Texture* left;
	sf::Texture* right;
	sf::Texture* middle;
};

class MenuManager{
public:
	MenuManager(InputManager* inputManager);
	~MenuManager();

	void initialize(sf::RenderWindow* window);

	void finalize(sf::RenderWindow* window);

	void tick(sf::RenderWindow* window, const sf::Time& time, const float& dt);

	void draw(const sf::Time& time);

	const void MenuManager::mouseButtonListener(MouseButtonEvent& event);

	std::map<std::string, Menu*> menus;
private:
	InputManager* inputManager_;
};
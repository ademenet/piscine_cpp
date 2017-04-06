#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name) {
	std::cout << "ScavTrap: \"Look out everybody! Things are about to get awesome!\"" << std::endl;
	// this->_hitpoints			= 100;
	// this->_maxhitpoints			= 100;
	this->_energypoints			= 50;
	this->_maxenergypoints		= 50;
	// this->_level				= 1;
	this->_meleedamage			= 20;
	this->_rangeddamage			= 15;
	this->_armordamagereduction	= 3;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap: \"I'm leaking!\"" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	if (this != &rhs) {
		this->_name					= rhs._name;
		this->_hitpoints			= rhs._hitpoints;
		this->_maxhitpoints			= rhs._maxhitpoints;
		this->_energypoints			= rhs._energypoints;
		this->_maxenergypoints		= rhs._maxenergypoints;
		this->_level				= rhs._level;
		this->_meleedamage			= rhs._meleedamage;
		this->_rangeddamage			= rhs._rangeddamage;
		this->_armordamagereduction	= rhs._armordamagereduction;
	}
	return *this;
}

void ScavTrap::challengeNewcomer(void) {
	std::srand(time(NULL));
	int i = rand() % 4;
	std::string challenges[4] = { "\"I will prove to you my robotic superiority!\"",
								  "\"Dance battle! Or, you know... regular battle.\"",
								  "\"Man versus machine! Very tiny streamlined machine!\"",
								  "\"You versus me! Me versus you! Either way!\"" };
	std::cout << challenges[i] << std::endl;
	return;
}

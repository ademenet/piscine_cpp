#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	return;
}

ScavTrap::ScavTrap(std::string name) : _name(name) {
	std::cout << "ScavTrap: \"Look out everybody! Things are about to get awesome!\"" << std::endl;
	this->_hitpoints			= 100;
	this->_maxhitpoints			= 100;
	this->_energypoints			= 50;
	this->_maxenergypoints		= 50;
	this->_level				= 1;
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

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target << " at range, causing ";
	std::cout << this->_rangeddamage << " damages." << std::endl;
	return;
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target << " in melee, causing ";
	std::cout << this->_meleedamage << " damages." << std::endl;
	return;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " takes " << amount << " of damages minus armor of ";
	std::cout << this->_armordamagereduction << ". Hitpoints goes from " << this->_hitpoints;

	this->_hitpoints -= (amount - this->_armordamagereduction);
	if (this->_hitpoints < 0)
		this->_hitpoints = 0;

	std::cout << " to " << this->_hitpoints << "." << std::endl;
	return;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " gets repaired of " << amount;
	std::cout << ". Hitpoints goes from " << this->_hitpoints;

	this->_hitpoints += amount;
	if (this->_hitpoints > (int)this->_maxhitpoints)
		this->_hitpoints = (int)this->_maxhitpoints;

	std::cout << " to " << this->_hitpoints << "." << std::endl;
	return;
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

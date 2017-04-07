#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitpoints			= 100;
	this->_maxhitpoints			= 100;
	this->_energypoints			= 120;
	this->_maxenergypoints		= 120;
	// this->_level				= 1;
	this->_meleedamage			= 60;
	this->_rangeddamage			= 20;
	this->_armordamagereduction	= 5;
	return;
}

SuperTrap::SuperTrap(SuperTrap const &src) : ClapTrap(src), FragTrap(src), NinjaTrap(src){
	*this = src;
	return;
}

SuperTrap::~SuperTrap(void) {
	return;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs) {
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

void SuperTrap::rangedAttack(std::string const &target) {
	this->FragTrap::rangedAttack(target);
	return;
}

void SuperTrap::meleeAttack(std::string const &target) {
	this->NinjaTrap::meleeAttack(target);
	return;
}

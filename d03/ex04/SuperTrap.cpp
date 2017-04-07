#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitpoints			= this->FragTrap::_hitpoints;
	this->_maxhitpoints			= this->FragTrap::_maxhitpoints;
	this->_energypoints			= this->NinjaTrap::_energypoints;
	this->_maxenergypoints		= this->NinjaTrap::_maxenergypoints;
	// this->_level				= 1;
	this->_meleedamage			= this->NinjaTrap::_meleedamage;
	this->_rangeddamage			= this->FragTrap::_rangeddamage;
	this->_armordamagereduction	= this->FragTrap::_armordamagereduction;
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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(100), _maxhitpoints(100),
 										_energypoints(100), _maxenergypoints(100), _level(1),
										_meleedamage(30), _rangeddamage(20), _armordamagereduction(5) {
	std::cout << "ClapTrap: \"Glitching weirdness is a term of endearment, right?\"" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap: \"No, nononono NO!\"" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
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

void ClapTrap::rangedAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target << " at range, causing ";
	std::cout << this->_rangeddamage << " damages." << std::endl;
	return;
}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target << " in melee, causing ";
	std::cout << this->_meleedamage << " damages." << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " takes " << amount << " of damages minus armor of ";
	std::cout << this->_armordamagereduction << ". Hitpoints goes from " << this->_hitpoints;

	this->_hitpoints -= (amount - this->_armordamagereduction);
	if (this->_hitpoints < 0)
		this->_hitpoints = 0;

	std::cout << " to " << this->_hitpoints << "." << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " gets repaired of " << amount;
	std::cout << ". Hitpoints goes from " << this->_hitpoints;

	this->_hitpoints += amount;
	if (this->_hitpoints > (int)this->_maxhitpoints)
		this->_hitpoints = (int)this->_maxhitpoints;

	std::cout << " to " << this->_hitpoints << "." << std::endl;
	return;
}

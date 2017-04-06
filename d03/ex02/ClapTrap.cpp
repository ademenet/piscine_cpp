#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "\"Glitching weirdness is a term of endearment, right?\"" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "\"No, nononono NO!\"" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
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

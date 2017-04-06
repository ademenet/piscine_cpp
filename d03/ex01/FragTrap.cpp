#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	return;
}

FragTrap::FragTrap(std::string name) : _name(name) {
	std::cout << "\"Hey everybody! Check out my package!\"" << std::endl;
	this->_hitpoints			= 100;
	this->_maxhitpoints			= 100;
	this->_energypoints			= 100;
	this->_maxenergypoints		= 100;
	this->_level				= 1;
	this->_meleedamage			= 30;
	this->_rangeddamage			= 20;
	this->_armordamagereduction	= 5;
	return;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "\"I'm too pretty to die!\"" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
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

void FragTrap::rangedAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target << " at range, causing ";
	std::cout << this->_rangeddamage << " damages." << std::endl;
	return;
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << this->_name << " attacks " << target << " in melee, causing ";
	std::cout << this->_meleedamage << " damages." << std::endl;
	return;
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " takes " << amount << " of damages minus armor of ";
	std::cout << this->_armordamagereduction << ". Hitpoints goes from " << this->_hitpoints;

	this->_hitpoints -= (amount - this->_armordamagereduction);
	if (this->_hitpoints < 0)
		this->_hitpoints = 0;

	std::cout << " to " << this->_hitpoints << "." << std::endl;
	return;
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " gets repaired of " << amount;
	std::cout << ". Hitpoints goes from " << this->_hitpoints;

	this->_hitpoints += amount;
	if (this->_hitpoints > (int)this->_maxhitpoints)
		this->_hitpoints = (int)this->_maxhitpoints;

	std::cout << " to " << this->_hitpoints << "." << std::endl;
	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::srand(time(NULL));
	void (FragTrap::*attacks[5])(std::string const &) = { &FragTrap::spoonAttack,
														  &FragTrap::fartAttack,
														  &FragTrap::stabiloAttack,
														  &FragTrap::sisterAttack,
														  &FragTrap::windAttack };
	this->_energypoints -= 25;
	if (this->_energypoints < 0) {
		std::cout << "You don't have enough energy to operate an attack." << std::endl;
		this->_energypoints = 0;
	}
	else {
		std::cout << "\"I'm pulling tricks outta my hat!\" ";
		(this->*attacks[rand() % 5])(target);
	}
}

void FragTrap::spoonAttack(std::string const &target) {
	unsigned int damages = 10;
	std::cout << this->_name << " attacks " << target << " with a spoon, causing ";
	std::cout << damages << " damages." << std::endl;
	return;
}

void FragTrap::fartAttack(std::string const &target) {
	unsigned int damages = 10;
	std::cout << this->_name << " attacks " << target << " by farting on it, causing ";
	std::cout << damages << " damages." << std::endl;
	return;
}

void FragTrap::stabiloAttack(std::string const &target) {
	unsigned int damages = 10;
	std::cout << this->_name << " attacks " << target << " with a stabilo, causing ";
	std::cout << damages << " damages." << std::endl;
	return;
}

void FragTrap::sisterAttack(std::string const &target) {
	unsigned int damages = 10;
	std::cout << this->_name << " attacks " << target << " with its young sister, causing ";
	std::cout << damages << " damages." << std::endl;
	return;
}

void FragTrap::windAttack(std::string const &target) {
	unsigned int damages = 10;
	std::cout << this->_name << " attacks " << target << " with wind, causing ";
	std::cout << damages << " damages." << std::endl;
	return;
}

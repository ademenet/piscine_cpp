#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name) {
	std::cout << "FragTrap: \"Hey everybody! Check out my package!\"" << std::endl;
	// this->_hitpoints			= 100;
	// this->_maxhitpoints			= 100;
	// this->_energypoints			= 100;
	// this->_maxenergypoints		= 100;
	// this->_level				= 1;
	// this->_meleedamage			= 30;
	// this->_rangeddamage			= 20;
	// this->_armordamagereduction	= 5;
	return;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap: \"I'm too pretty to die!\"" << std::endl;
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

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::srand(time(NULL));
	std::string attacks[5] = { "spoon", "fart", "stabilo", "young sister", "bomb" };
	unsigned int damages = 10;
	this->_energypoints -= 25;
	if (this->_energypoints < 0) {
		std::cout << "You don't have enough energy to operate an attack." << std::endl;
		this->_energypoints = 0;
	}
	else {
		std::cout << "\"I'm pulling tricks outta my hat!\" ";
		std::cout << this->_name << " attacks " << target << " with a " << attacks[rand() % 5];
		std::cout <<  ", causing " << damages << " damages." << std::endl;
	}
}

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	std::cout << "NinjaTrap: \"I'm a robot ninja...\"" << std::endl;
	this->_hitpoints			= this->ninjahitpoints;
	this->_maxhitpoints			= this->ninjamaxhitpoints;
	this->_energypoints			= this->ninjaenergypoints;
	this->_maxenergypoints		= this->ninjamaxenergypoints;
	this->_meleedamage			= this->ninjameleedamage;
	this->_rangeddamage			= this->ninjarangeddamage;
	this->_armordamagereduction	= this->ninjaarmordamagereduction;
	// this->_level				= 1;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src) {
	*this = src;
	return;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap: \"Oh crap!\"" << std::endl;
	return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
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

void NinjaTrap::ninjaShoebox(const ClapTrap &robot) const {
	std::cout << "NinjaTrap: \"RUN FOR YOUR LIIIIIVES " << robot.getName();
	std::cout << "!!!\"" << std::endl;
	return;
}

void NinjaTrap::ninjaShoebox(const FragTrap &robot) const {
	std::cout << "NinjaTrap: \"Psst " << robot.getName() << "! Ad-ass-bay, over ere-bay!\"" << std::endl;
	return;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &robot) const {
	std::cout << "NinjaTrap: \"You're a tiny glacier " << robot.getName();
	std::cout << "!\"" << std::endl;
	return;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &robot) const {
	std::cout << "NinjaTrap: \"Cryo me a river " << robot.getName() << "!\"" << std::endl;
	return;
}

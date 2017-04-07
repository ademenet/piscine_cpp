#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitpoints			= this->FragTrap::fraghitpoints;
	this->_maxhitpoints			= this->FragTrap::fragmaxhitpoints;
	this->_energypoints			= this->NinjaTrap::ninjaenergypoints;
	this->_maxenergypoints		= this->NinjaTrap::ninjamaxenergypoints;
	// this->_level				= 1;
	this->_meleedamage			= this->NinjaTrap::ninjameleedamage;
	this->_rangeddamage			= this->FragTrap::fragrangeddamage;
	this->_armordamagereduction	= this->FragTrap::fragarmordamagereduction;
	std::cout << "_hitPoints, should be (100): " << this->_hitpoints << std::endl;
	std::cout << "_maxHitPoi, should be (100): " << this->_maxhitpoints << std::endl;
	std::cout << "_energyPoi, should be (120): " << this->_energypoints << std::endl;
	std::cout << "_maxEnergy, should be (120): " << this->_maxenergypoints << std::endl;
	std::cout << "_level    , should be (  1): " << this->_level << std::endl;
	std::cout << "_meleeAtta, should be ( 60): " << this->_meleedamage << std::endl;
	std::cout << "_rangedAtt, should be ( 20): " << this->_rangeddamage << std::endl;
	std::cout << "_armorDama, should be (  5): " << this->_armordamagereduction << std::endl;
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

#include <iostream>
#include "ZombieEvent.hpp"

std::string	ZombieEvent::_zombiesName[9] = {"Jean-Jean", "Soso", "Gody", "Roro", "Bat", "Glouglou", "Siphyl", "Soca", "Kyf"};

ZombieEvent::ZombieEvent(void) {
	return;
}

ZombieEvent::~ZombieEvent(void) {
	return;
}

void	ZombieEvent::setZombieType(std::string zombieType) {
	this->_type = zombieType;
	return;
}

Zombie	ZombieEvent::*randomChump(void) {
	std::string		nameChosen	= this->_zombiesName[rand() % 9];
	Zombie			*newOne 	= new Zombie(nameChosen, "Chump");
	return(newOne);
}

Zombie	ZombieEvent::*newZombie(std::string name) {
	return();
}

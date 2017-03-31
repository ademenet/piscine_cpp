#include <iostream>
#include "ZombieEvent.hpp"

const std::string	ZombieEvent::_zombiesName[] = {"Jean-Jean", "Soso", "Gody", "Roro", "Bat", "Glouglou", "Siphyl", "Soca", "Kyf"};
std::string 		_type = NULL;

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

Zombie	ZombieEvent::randomChump(void) {
	// Select a random name inside _zombiesName list
	std::string	chosenName	= this->_zombiesName[rand() % 9];
	// Assign it to create a new zombie
	Zombie		newOne(chosenName, "randomChump");
	return(newOne);
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie		*newOne = new Zombie(name, this->_type);
	return(newOne);
}

#include <iostream>
#include "ZombieEvent.hpp"

const std::string	ZombieEvent::zombiesName[] = {"Jean-Jean", "Soso", "Gody", "Roro", "Bat", "Glouglou", "Siphyl", "Soca", "Kyf"};

ZombieEvent::ZombieEvent(void) {
	return;
}

ZombieEvent::~ZombieEvent(void) {
	return;
}

void	ZombieEvent::setZombieType(std::string zombieType) {
	this->type = zombieType;
	return;
}

Zombie	ZombieEvent::randomChump(void) {
	// Select a random name inside _zombiesName list
	// Random generation number is based on the time
	std::srand(time(NULL));
	std::string	chosenName	= this->zombiesName[rand() % 9];
	// Assign it to create a new zombie
	Zombie		newOne(chosenName, "randomChump");
	return(newOne);
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie		*newOne = new Zombie(name, this->type);
	return(newOne);
}

#include "ZombieHorde.hpp"

const std::string	ZombieHorde::zombiesName[] = {"Jean-Jean", "Soso", "Gody", "Roro", "Bat", "Glouglou", "Siphyl", "Soca", "Kyf"};

ZombieHorde::ZombieHorde(unsigned int N) {
	this->hordeSize 	= N;
	this->zombiesHorde	= new Zombie[N];

	for (unsigned int i = 0; i < this->hordeSize; i++) {
		std::srand(time(NULL));
		std::string	chosenName	= this->zombiesName[(rand() + i) % 9];
		this->zombiesHorde[i].setName(chosenName);
		this->zombiesHorde[i].setType("horde zombie");
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->zombiesHorde;
	return;
}

void	ZombieHorde::announce(void) const {
	for (unsigned int i = 0; i < this->hordeSize; i++) {
		zombiesHorde[i].announce();
	}
	return;
}

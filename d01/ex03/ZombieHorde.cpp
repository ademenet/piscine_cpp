#include "ZombieHorde.hpp"

const std::string	ZombieHorde::_zombiesName[] = {"Jean-Jean", "Soso", "Gody", "Roro", "Bat", "Glouglou", "Siphyl", "Soca", "Kyf"};

ZombieHorde::ZombieHorde(unsigned int N) : _hordeSize(N) {
	this->_zombiesHorde	= new Zombie[this->_hordeSize];

	for (unsigned int i = 0; i < this->_hordeSize; i++) {
		std::srand(time(NULL));
		std::string	chosenName	= this->_zombiesName[(rand() + i) % 9];
		this->_zombiesHorde[i].setName(chosenName);
		this->_zombiesHorde[i].setType("horde zombie");
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_zombiesHorde;
	return;
}

void	ZombieHorde::announce(void) const {
	for (unsigned int i = 0; i < this->_hordeSize; i++) {
		_zombiesHorde[i].announce();
	}
	return;
}

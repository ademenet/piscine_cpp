#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(PowerFist const &src) {
	*this = src;
	return;
}

PowerFist::~PowerFist(void) {
	return;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	return *this;
}

void PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
	*this = src;
	return;
}

PlasmaRifle::~PlasmaRifle(void) {
	return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	return *this;
}

void PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}

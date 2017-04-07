#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : name(name), apcost(apcost), damage(damage) {
	return;
}

AWeapon::AWeapon(void) {
	return;
}

AWeapon::AWeapon(AWeapon const &src) {
	*this = src;
	return;
}

AWeapon::~AWeapon(void) {
	return;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	return *this;
}

const std::string AWeapon::getName(void) const {
	return(this->name);
}

int AWeapon::getAPCost(void) const {
	return(this->apcost);
}

int AWeapon::getDamage(void) const {
	return(this->damage);
}

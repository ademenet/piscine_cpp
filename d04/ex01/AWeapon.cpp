#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
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
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return *this;
}

const std::string AWeapon::getName(void) const {
	return(this->_name);
}

int AWeapon::getAPCost(void) const {
	return(this->_apcost);
}

int AWeapon::getDamage(void) const {
	return(this->_damage);
}

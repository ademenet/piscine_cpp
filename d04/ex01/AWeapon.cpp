#include "AWeapon.hpp"

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
	return *this;
}

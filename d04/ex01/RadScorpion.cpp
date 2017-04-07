#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &src) {
	*this = src;
	return;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
	if (this != &rhs) {
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return *this;
}

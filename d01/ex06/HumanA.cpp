#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	return;
}

HumanA::~HumanA(void) {
	return;
}

const void HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return;
}

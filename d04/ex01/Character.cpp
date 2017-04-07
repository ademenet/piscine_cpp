#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _AP(40), _weapon(NULL) {
	return;
}

Character::Character(Character const &src) {
	*this = src;
	return;
}

Character::~Character(void) {
	return;
}

Character &Character::operator=(Character const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_weapon = rhs._weapon;
	}
	return *this;
}

void Character::recoverAP(void) {
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
	return;
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
	return;
}

void Character::attack(Enemy *enemy) {
	if (this->_weapon) {
		std::cout << this->_name << " attacks " << enemy << " with a " << this->_weapon << std::endl;
		this->_weapon->attack();
		enemy->_hp -= this->_weapon->damage;
		if (enemy->_hp < 1)
			delete enemy;
	}
	return;
}

const std::string Character::getName() const {
	return(this->_name);
}

bool Character::getEquip() {
	if (this->_weapon)
		return(true);
	return(false);
}

int Character::getAPNumber() const {
	return(this->_AP);
}

const std::string Character::getWeaponName() const {
	return(this->_weapon->name);
}

// Out of scope
std::ostream &operator<<(std::ostream &o, Character const &rhs) {
	if (rhs.getEquip()) {
		o << rhs.getName() << " has " << rhs.getAPNumber() << " AP and wields a " << rhs.getWeaponName() << std::endl;
	}
	else {
		o << rhs.getName() << " has " << rhs.getAPNumber() << " AP and is unarmed" << std::endl;
	}
	return o;
}

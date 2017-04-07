#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

public:
	Character(std::string const &name);
	Character(Character const &src);
	~Character(void);
	Character &operator=(Character const &rhs);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	const std::string getName() const;

	bool getEquip();
	int getAPNumber() const;
	const std::string getWeaponName() const;

private:
	std::string			_name;
	int					_AP;
	AWeapon				*_weapon;

	Character(void);

};

std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif

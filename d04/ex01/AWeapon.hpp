#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	virtual ~AWeapon(void);
	AWeapon &operator=(AWeapon const &rhs);

	const std::string getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;

	virtual void attack(void) const = 0;


protected:
	std::string		_name;
	int				_apcost;
	int				_damage;

	AWeapon(void);

private:

};

#endif

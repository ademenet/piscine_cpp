#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	virtual ~AWeapon(void); // Verifier si cest bien virtual devant
	AWeapon &operator=(AWeapon const &rhs);

	const std::string getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;

	virtual void attack(void) const = 0; // This transforms AWeapon to abstract class

	int				_damage;
	int				_apcost;
	std::string		_name;

protected:
	AWeapon(void);

private:

};

#endif

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);
	ClapTrap &operator=(ClapTrap const &rhs);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;

protected:
	std::string			_name;
	int					_hitpoints;
	unsigned int		_maxhitpoints;
	int					_energypoints;
	unsigned int		_maxenergypoints;
	unsigned int		_level;
	unsigned int		_meleedamage;
	unsigned int		_rangeddamage;
	unsigned int		_armordamagereduction;

	ClapTrap(void);

private:

};

#endif

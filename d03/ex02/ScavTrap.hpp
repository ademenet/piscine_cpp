#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);
	ScavTrap &operator=(ScavTrap const &rhs);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void challengeNewcomer(void);

private:
	ScavTrap(void);

	std::string			_name;
	int					_hitpoints;
	unsigned int		_maxhitpoints;
	int					_energypoints;
	unsigned int		_maxenergypoints;
	unsigned int		_level;
	unsigned int		_meleedamage;
	unsigned int		_rangeddamage;
	unsigned int		_armordamagereduction;

};

#endif

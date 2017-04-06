#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);
	FragTrap &operator=(FragTrap const &rhs);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const &target);

	void spoonAttack(std::string const &target);
	void fartAttack(std::string const &target);
	void stabiloAttack(std::string const &target);
	void sisterAttack(std::string const &target);
	void windAttack(std::string const &target);

private:
	FragTrap(void);

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

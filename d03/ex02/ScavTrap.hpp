#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);
	ScavTrap &operator=(ScavTrap const &rhs);

	void challengeNewcomer(void);

private:
	ScavTrap(void);

	std::string			_name;

};

#endif

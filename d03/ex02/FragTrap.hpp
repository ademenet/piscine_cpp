#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);
	FragTrap &operator=(FragTrap const &rhs);

	void vaulthunter_dot_exe(std::string const &target);

private:
	FragTrap(void);

	std::string			_name;

};
#endif

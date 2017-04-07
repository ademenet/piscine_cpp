#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);
	FragTrap &operator=(FragTrap const &rhs);

	void vaulthunter_dot_exe(std::string const &target);

protected:
	FragTrap(void);

private:
	static const int fraghitpoints				= 100;
	static const int fragmaxhitpoints			= 100;
	static const int fragenergypoints			= 100;
	static const int fragmaxenergypoints		= 100;
	static const int fraglevel					= 1;
	static const int fragmeleedamage			= 30;
	static const int fragrangeddamage			= 20;
	static const int fragarmordamagereduction	= 5;

};
#endif

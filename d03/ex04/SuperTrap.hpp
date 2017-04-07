#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : FragTrap, NinjaTrap {

public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	~SuperTrap(void);
	SuperTrap &operator=(SuperTrap const &rhs);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);

private:
	SuperTrap(void);

};

#endif

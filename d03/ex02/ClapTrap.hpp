#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);
	ClapTrap &operator=(ClapTrap const &rhs);

private:
	ClapTrap(void);

};

#endif

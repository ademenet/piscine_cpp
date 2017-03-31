#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

public:
	static const	std::string zombiesName[9];
	unsigned int	hordeSize;
	Zombie			*zombiesHorde;

	ZombieHorde(unsigned int N);
	~ZombieHorde(void);

	void announce(void) const;
};

#endif

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

public:
	ZombieHorde(unsigned int N);
	~ZombieHorde(void);

	void announce(void) const;

private:
	const unsigned int			_hordeSize;
	Zombie						*_zombiesHorde;
	static const std::string	_zombiesName[9];

};

#endif

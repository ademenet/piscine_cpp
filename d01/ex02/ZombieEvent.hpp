#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {

public:
	ZombieEvent();
	~ZombieEvent();

	void		setZombieType(std::string zombieType);
	Zombie		*randomChump(void);
	Zombie*		newZombie(std::string name);

private:
	std::string	static _zombiesName[9];
	std::string	_type;

};

#endif

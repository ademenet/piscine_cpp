#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie(void);

	void setName(std::string name);
	void setType(std::string type);
	void announce(void) const;

private:
	std::string	_type;
	std::string	_name;

};

#endif

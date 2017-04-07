#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
	~Sorcerer(void);
	Sorcerer &operator=(Sorcerer const &rhs);

	void introduce(void) const;
	const std::string getIntroduce(void) const;
	void polymorph(Victim const &src) const;

private:
	std::string		_name;
	std::string		_title;

	Sorcerer(void);

};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif

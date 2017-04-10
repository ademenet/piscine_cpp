#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

public:
	Peon(std::string name);
	Peon(Peon const &src);
	virtual ~Peon(void);
	Peon &operator=(Peon const &rhs);

	virtual void getPolymorphed(void) const;

private:
	Peon(void);

};

#endif

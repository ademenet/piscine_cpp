#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

public:

	std::string name;

	Pony( std::string ponyName );
	~Pony(void);

	void doStuffThatPonyDo(void) const;

};

#endif

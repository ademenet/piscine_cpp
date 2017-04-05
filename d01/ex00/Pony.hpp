#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

public:
	Pony( std::string ponyName );
	~Pony(void);

	void doStuffThatPonyDo(void) const;

private:
	const std::string _name;

};

#endif

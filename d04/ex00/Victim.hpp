#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {

public:
	Victim(std::string name);
	Victim(Victim const &src);
	virtual ~Victim(void);
	Victim &operator=(Victim const &rhs);

	void introduce(void) const;
	const std::string getIntroduce(void) const;
	virtual void getPolymorphed(void) const;

protected:
	std::string		_name;

	Victim(void);

};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif

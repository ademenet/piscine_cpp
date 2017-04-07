#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>

class PlasmaRifle {

public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &src);
	~PlasmaRifle(void);
	PlasmaRifle &operator=(PlasmaRifle const &rhs);

private:

};

#endif

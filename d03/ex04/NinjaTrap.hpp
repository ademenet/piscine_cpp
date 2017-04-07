#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class NinjaTrap : public virtual ClapTrap {

public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	~NinjaTrap(void);
	NinjaTrap &operator=(NinjaTrap const &rhs);

	void ninjaShoebox(const ClapTrap &robot) const;
	void ninjaShoebox(const FragTrap &robot) const;
	void ninjaShoebox(const ScavTrap &robot) const;
	void ninjaShoebox(const NinjaTrap &robot) const;

protected:
	NinjaTrap(void);

private:
	static const int ninjahitpoints			= 60;
	static const int ninjamaxhitpoints			= 60;
	static const int ninjaenergypoints			= 120;
	static const int ninjamaxenergypoints		= 120;
	static const int ninjalevel				= 1;
	static const int ninjameleedamage			= 60;
	static const int ninjarangeddamage			= 5;
	static const int ninjaarmordamagereduction	= 0;

};

#endif

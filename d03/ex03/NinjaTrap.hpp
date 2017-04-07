#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class NinjaTrap : public ClapTrap {

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

private:
	NinjaTrap(void);

};

#endif

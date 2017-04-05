#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(int	nb);
	Fixed(float	nb);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &operator=(Fixed const & rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	int					_fpvalue;
	static const int	_fbits; // Allways 8

};

#endif

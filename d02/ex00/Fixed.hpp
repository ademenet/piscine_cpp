#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &operator=(Fixed const & rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int					_fpvalue;
	static const int	_fbits; // Allways 8

};

#endif

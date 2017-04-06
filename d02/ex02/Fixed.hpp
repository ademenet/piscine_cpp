#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(const int	nb);
	Fixed(const float	nb);
	Fixed(Fixed const &src);
	~Fixed(void);

	// Operators overloading:
	Fixed &operator=(Fixed const &rhs);
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static const Fixed &min(Fixed const &nb1, Fixed const &nb2);
	static const Fixed &max(Fixed const &nb1, Fixed const &nb2);
	static Fixed &min(Fixed &nb1, Fixed &nb2);
	static Fixed &max(Fixed &nb1, Fixed &nb2);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	int					_fpvalue;
	static const int	_fbits; // Allways 8

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif

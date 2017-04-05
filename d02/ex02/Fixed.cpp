#include "Fixed.hpp"

const int Fixed::_fbits = 8;

Fixed::Fixed(void) : _fpvalue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const nb) {
	std::cout << "Integer constructor called" << std::endl;
	this->_fpvalue = nb << Fixed::_fbits;
	return;
}

Fixed::Fixed(float const nb) {
	std::cout << "Float constructor called" << std::endl;
	this->_fpvalue = roundf(nb * Fixed::_powerOfTwo(Fixed::_fbits));
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fpvalue = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const& rhs)
{
    return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const& rhs)
{
    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const& rhs)
{
    return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const& rhs)
{
    return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const& rhs)
{
    return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const& rhs)
{
    return (this->toFloat() != rhs.toFloat());
}

Fixed Fixed::Fixed::operator+(Fixed const& rhs)
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::Fixed::operator-(Fixed const& rhs)
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::Fixed::operator*(Fixed const& rhs)
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::Fixed::operator/(Fixed const& rhs)
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::Fixed::operator++()
{
    ++(this->_fpvalue);
    return (*this);
}

Fixed &Fixed::Fixed::operator--()
{
    --(this->_fpvalue);
    return (*this);
}

Fixed Fixed::Fixed::operator++(int)
{
    Fixed tmp = *this;

    ++(*this);
    return (tmp);
}

Fixed Fixed::Fixed::operator--(int)
{
    Fixed tmp = *this;

    --(*this);
    return (tmp);
}

const Fixed &Fixed::min(Fixed const &nb1, Fixed const &nb2)
{
    if (nb1.toFloat() < nb2.toFloat())
        return (nb1);
    return (nb2);
}

const Fixed &Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
    if (nb1.toFloat() > nb2.toFloat())
        return (nb1);
    return (nb2);
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
    if (nb1.toFloat() < nb2.toFloat())
        return (nb1);
    return (nb2);
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
    if (nb1.toFloat() > nb2.toFloat())
        return (nb1);
    return (nb2);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fpvalue);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpvalue = raw;
}

float toFloat(void) {
	return ((float)this->_fpvalue / Fixed::_pow2(Fixed::_fbits));
}

int toInt(void) {
	return (this->raw >> Fixed::_fbits);
}

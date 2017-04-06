#include "Fixed.hpp"

const int Fixed::_fbits = 8;

Fixed::Fixed(void) : _fpvalue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int nb) {
	std::cout << "Integer constructor called" << std::endl;
	this->_fpvalue = nb << (Fixed::_fbits);
	return;
}

Fixed::Fixed(const float nb) {
	std::cout << "Float constructor called" << std::endl;
	this->_fpvalue = (int)roundf(nb * (1 << Fixed::_fbits));
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fpvalue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return(this->_fpvalue);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpvalue = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->_fpvalue / (1 << Fixed::_fbits));
}

int Fixed::toInt(void) const {
	return (this->_fpvalue >> Fixed::_fbits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return o;
}

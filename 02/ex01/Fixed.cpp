/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:28:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixedNumber(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _fixedNumber(value) {

	std::cout << "Integer constructor called" << std::endl;
	_fixedNumber = 0;
	_fixedNumber = value << _fractionalBits;
}

Fixed::Fixed(const float value): _fixedNumber(value) {

	std::cout << "Float constructor called" << std::endl;
	_fixedNumber = 0;
	_fixedNumber = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy): _fixedNumber(copy._fixedNumber) {
	
	std::cout << "Copy constructor called" << std::endl;
	_fixedNumber = copy._fixedNumber;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &fixed) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream &operator << (std::ostream &os, const Fixed &value) {

	os << value.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedNumber);
}

void	Fixed::setRawBits(int const raw) {

	_fixedNumber = raw;
}

float	Fixed::toFloat(void) const {

	float floatValue = (float)_fixedNumber / (1 << _fractionalBits);

	return (floatValue);
}

int		Fixed::toInt(void) const {

	int intValue = _fixedNumber >> _fractionalBits;

	return (intValue);
}

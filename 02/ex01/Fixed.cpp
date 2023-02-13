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

/**
 * _fixedNumber = value << _factionalBits
 * 			<=>
 * _fixedNumber = value * (2 ^ _fractionalBits)
*/
Fixed::Fixed(const int value): _fixedNumber(value) {

	std::cout << "Integer constructor called" << std::endl;
	_fixedNumber = 0;
	_fixedNumber = value << _fractionalBits;
}

/**
 * _fixedNumber = roundf(value * (1 << _fractionalBits));
 * 			<=>
 * _fixedNumber = roundf(value * (2 ^ _fractionalBits));
*/
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

/**
 * The operator << overload inserts the result of toFloat() into the 
 * output stream os. 
 * This allows to easily print a fixed-point value as a floating-point value.
*/
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

	int	res = _fixedNumber;
	int sign = res < 0 ? -1 : 1;

	res = sign < 0 ? -res : res;
	float floatValue = (float)res / (1 << _fractionalBits) * sign;
	return (floatValue);
}

int		Fixed::toInt(void) const {

	int	res = _fixedNumber;
	int sign = res < 0 ? -1 : 1;

	res = sign < 0 ? -res : res;
	int intValue = (res >> _fractionalBits) * sign;
	return (intValue);
}

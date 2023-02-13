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

	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _fixedNumber(value) {

	// std::cout << "Integer constructor called" << std::endl;
	_fixedNumber = 0;
	_fixedNumber = value << _fractionalBits;
}

Fixed::Fixed(const float value): _fixedNumber(value) {

	// std::cout << "Float constructor called" << std::endl;
	_fixedNumber = 0;
	_fixedNumber = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy): _fixedNumber(copy._fixedNumber) {
	
	// std::cout << "Copy constructor called" << std::endl;
	_fixedNumber = copy._fixedNumber;
}

Fixed::~Fixed(void) {

	// std::cout << "Destructor called" << std::endl;
}

/**
 * Comparison operators
*/
bool	Fixed::operator > (const Fixed &fixed) const {

	return (toFloat() > fixed.toFloat());
}

bool	Fixed::operator < (const Fixed &fixed) const {

	return (toFloat() < fixed.toFloat());
}

bool	Fixed::operator >= (const Fixed &fixed) const {

	return (toFloat() >= fixed.toFloat());
}

bool	Fixed::operator <= (const Fixed &fixed) const {

	return (toFloat() <= fixed.toFloat());
}

bool	Fixed::operator == (const Fixed &fixed) const {

	return (toFloat() == fixed.toFloat());
}

bool	Fixed::operator != (const Fixed &fixed) const {

	return (toFloat() != fixed.toFloat());
}

/**
 * Arithmetic operators
*/
Fixed &Fixed::operator = (const Fixed &fixed) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		setRawBits(fixed.getRawBits());
	return (*this);
}

Fixed	Fixed::operator + (const Fixed &fixed) {

	return (toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator - (const Fixed &fixed) {

	return (toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator * (const Fixed &fixed) {

	return (toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator / (const Fixed &fixed) {

	return (toFloat() / fixed.toFloat());
}

/**
 * Increment / decrement operators
*/
Fixed	Fixed::operator ++ (int value) {

	(void)value; // ? to remove -Werror error
	Fixed copy(*this);
	++(*this);
	return (copy);
}

Fixed	&Fixed::operator ++ (void) {

	_fixedNumber++;
	return (*this);
}

Fixed	Fixed::operator -- (int value) {
	
	(void)value; // ? to remove -Werror error
	Fixed copy(*this);
	--(*this);
	return (copy);
}

Fixed	&Fixed::operator -- (void) {

	_fixedNumber--;
	return (*this);
}

/**
 * Ostream
*/
std::ostream &operator << (std::ostream &os, const Fixed &value) {

	os << value.toFloat();
	return (os);
}

/**
 * Functions
*/
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

/**
 * Min / max functions
*/
Fixed 		&Fixed::min(Fixed &first, Fixed &second) {

	return (first > second ? second : first);
}

Fixed const	&Fixed::min(const Fixed &first, const Fixed &second) {

	return (first > second ? second : first);
}

Fixed		&Fixed::max(Fixed &first, Fixed &second) {

	return (first > second ? first : second);
}

Fixed const	&Fixed::max(const Fixed &first, const Fixed &second) {

	return (first > second ? first : second);
}

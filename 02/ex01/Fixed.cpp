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

Fixed::Fixed(const int value) {

	// insert code here
}

Fixed::Fixed(const float value) {

	// insert code here
}

Fixed::Fixed(const Fixed& copy): _fixedNumber(copy._fixedNumber) {
	
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& fixed) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		setRawBits(fixed.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return Fixed::_fixedNumber;
}

void	Fixed::setRawBits(int const raw) {

	_fixedNumber = raw;
}

float	Fixed::toFloat(void) const {

	// insert code here
}

int		Fixed::toInt(void) const {

	// insert code here	
}
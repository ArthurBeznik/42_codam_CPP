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
 * A copy constructor is a constructor that takes a reference to an object 
 * of the same class, and it is used to initialize a new object with the values 
 * of an existing object. 
 * In the OCF, the copy constructor should perform a deep copy of the data members.
*/
Fixed::Fixed(const Fixed &copy): _fixedNumber(copy._fixedNumber) {
	
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

/**
 * A copy assignment operator is an operator that takes a reference to an 
 * object of the same class, and it is used to assign the values of one 
 * object to another. 
 * In the OCF, the copy assignment operator should perform a deep copy of 
 * the data members, and it should handle self-assignment correctly.
*/
Fixed &Fixed::operator = (const Fixed &fixed) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		setRawBits(fixed.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return _fixedNumber;
}

void	Fixed::setRawBits(int const raw) {

	_fixedNumber = raw;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 16:35:45 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/13 14:24:21 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void	checkComparisonOperators(void) {

	Fixed	a( 10 );
	Fixed	b( 1 );
	Fixed	c( 10 );

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	
	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << (a != c) << std::endl;
} 

static void	checkArithmeticOperators(void) {
	
	Fixed	a( 5 );
	Fixed	b( 5 );
	Fixed	c = a + b;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	
	std::cout << c.toInt() << std::endl;
	a = a + 10;
	std::cout << a.toInt() << std::endl;
	a = a / 5;
	std::cout << a.toInt() << std::endl;
	a = a - 2;
	std:: cout << a.toInt() << std::endl;
}

int main(void) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "------ Testing comparison operators ------" << std::endl;
	checkComparisonOperators();
	
	std::cout << "------ Testing arithmetic operators ------" << std::endl;
	checkArithmeticOperators();
	
	std::cout << "------ Testing min function ------" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	
	return (0);
}

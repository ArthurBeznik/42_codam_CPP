/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 16:35:45 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/07 15:27:27 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {

	Fixed a;		// default constructor
	Fixed b( a );	// copy constructor
	Fixed c;		// default constructor
	
	c = b;			// copy assignment operator
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}

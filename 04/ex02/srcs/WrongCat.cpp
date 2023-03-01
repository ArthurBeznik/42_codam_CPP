/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/28 12:45:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	
	std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy.getType()) {
	
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat::~WrongCat(void) {
	
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &wrongCat) {
	
	if (this == &wrongCat)
		return (*this);
	WrongAnimal::operator=(wrongCat);
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/28 11:52:58 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	
	std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
	
	std::cout << "WrongCat copy constructor called!" << std::endl;
	WrongAnimal(copy.getType());
}

WrongCat::~WrongCat(void) {
	
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

void	WrongCat::makeSound() const {

    std::cout << "Not Meeeeeoooow" << std::endl;
}
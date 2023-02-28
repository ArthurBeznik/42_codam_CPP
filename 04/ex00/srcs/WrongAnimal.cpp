/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void) : _type("N/A")  {
	
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type) {
	
    std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	
	std::cout << "WrongAnimal constructor called!" << std::endl;
	if (this != &copy) {
		*this = copy;
	}
}

WrongAnimal::~WrongAnimal(void) {
	
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

std::string const	WrongAnimal::getType(void) const {

	return _type;
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "Not Some animal sound" << std::endl;
}

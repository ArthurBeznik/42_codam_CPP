/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(void): _type("N/A") {
	
    std::cout << "Default animal constructor called!" << std::endl;
}

Animal::Animal(std::string const &type): _type(type) {
	
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal &copy) {
	
	std::cout << "Animal copy constructor called!" << std::endl;
	if (this != &copy) {
		*this = copy;
	}
}

Animal::~Animal(void) {
	
    std::cout << "Animal destructor called!" << std::endl;
}

Animal &Animal::operator = (const Animal &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

void	Animal::makeSound(void) const {

	std::cout << "Some animal sound" << std::endl;
}

std::string const	Animal::getType(void) const {

	return _type;
}

std::ostream	&operator << (std::ostream &ostream, const Animal &animal) {
	
	ostream << animal.getType();
	return ostream;
}

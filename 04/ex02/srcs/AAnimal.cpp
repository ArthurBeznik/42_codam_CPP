/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>

/**
 * Constructors - Destructors
*/
// AAnimal::AAnimal(void) : _type("N/A") {
	
//     std::cout << "Default animal constructor called!" << std::endl;
// }

AAnimal::AAnimal(std::string const &type) : _type(type) {
	
    std::cout << "AAnimal constructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) : _type(copy.getType()) {
	
	std::cout << "AAnimal copy constructor called!" << std::endl;
	if (this != &copy) {
		*this = copy;
	}
}

AAnimal::~AAnimal(void) {
	
    std::cout << "AAnimal destructor called!" << std::endl;
}

/**
 * Operator overloads
*/
AAnimal &AAnimal::operator = (const AAnimal &animal) {
	
	if (this == &animal)
		return (*this);
	this->_type = animal.getType();
	return (*this);
}

/**
 * Getters - Setters
*/
std::string const	&AAnimal::getType(void) const {

	return (this->_type);
}

// Brain	*AAnimal::getBrain(void) const {

// 	return NULL;
// }

/**
 * Other functions
*/
// void	AAnimal::makeSound(void) const {

// 	std::cout << "Some animal sound" << std::endl;
// }

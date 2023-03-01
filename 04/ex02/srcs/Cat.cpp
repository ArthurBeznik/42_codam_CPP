/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

/**
 * Constructors - Destructors
*/
Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain()) {
	
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy.getType()), _brain(copy.getBrain()) {
	
	std::cout << "Cat copy constructor called!" << std::endl;
	// AAnimal(copy.getType());
}

Cat::~Cat(void) {
	
	std::cout << "Cat destructor called!" << std::endl;
	delete this->_brain;
}

/**
 * Operator overloads
*/
Cat &Cat::operator = (const Cat &cat) {
	
	if (this == &cat)
		return (*this);
	AAnimal::operator=(cat);
	this->_type = cat.getType();
	*(this->_brain) = *(cat.getBrain());
	return (*this);
}

AAnimal &Cat::operator = (const AAnimal &animal) {
	
	if (this == &animal)
		return (*this);
	// AAnimal::operator=(animal);
	this->_type = animal.getType();
	*(this->_brain) = *(animal.getBrain());
	return (*this);
}

/**
 * Getters - Setters
*/
Brain	*Cat::getBrain(void) const {

	return (this->_brain);
}

/**
 * Other functions
*/
void    Cat::makeSound(void) const {

    std::cout << "Meeeeeoooow" << std::endl;
}


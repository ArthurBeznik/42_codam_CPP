/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

/**
 * Constructors - Destructors
*/
Dog::Dog(void): AAnimal("Dog"), _brain(new Brain()) {
	
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog &copy): AAnimal(copy.getType()), _brain(copy.getBrain()) {
	
	std::cout << "Dog copy constructor called!" << std::endl;
	// AAnimal(copy.getType());
}

Dog::~Dog(void) {
	
	std::cout << "Dog destructor called!" << std::endl;
	delete _brain;
}

/**
 * Operator overloads
*/
Dog &Dog::operator = (const Dog &dog) {
	
	if (this == &dog)
		return (*this);
	AAnimal::operator=(dog);
	this->_type = dog.getType();
	*(this->_brain) = *(dog.getBrain());
	return (*this);
}

AAnimal &Dog::operator = (const AAnimal &animal) {
	
	if (this == &animal)
		return (*this);
	// AAnimal::operator=(animal);
	this->_type = animal.getType();
	*(this->_brain) = *(animal.getBrain());
	return (*this);
}

/**
 * Other functions
*/
void    Dog::makeSound() const {

    std::cout << "Woof woof woooof" << std::endl;
}

Brain	*Dog::getBrain(void) const {

	return (this->_brain);
}

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

Dog::Dog(void): Animal("Dog") {
	
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
	
	std::cout << "Dog copy constructor called!" << std::endl;
	// Animal(copy.getType());
}

Dog::~Dog(void) {
	
	std::cout << "Dog destructor called!" << std::endl;
}

Dog &Dog::operator = (const Dog &dog) {
	
	if (this == &dog)
		return (*this);
	Animal::operator=(dog);
	// this->_type = dog.getType();
	return (*this);
}

void    Dog::makeSound() const {

    std::cout << "Woof woof woooof" << std::endl;
}

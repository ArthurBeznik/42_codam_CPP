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

Cat::Cat(void): Animal("Cat"), _brain(new Brain()) {
	
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy.getType()) {
	
	std::cout << "Cat copy constructor called!" << std::endl;
	// Animal(copy.getType());
}

Cat::~Cat(void) {
	
	std::cout << "Cat destructor called!" << std::endl;
	delete _brain;
}

Cat &Cat::operator = (const Cat &cat) {
	
	if (this == &cat)
		return (*this);
	Animal::operator=(cat); 
	return (*this);
}

void    Cat::makeSound() const {

    std::cout << "Meeeeeoooow" << std::endl;
}

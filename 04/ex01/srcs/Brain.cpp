/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:54:15 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void) {
	
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &copy) {
	
	std::cout << "Brain copied" << std::endl;
	if (this != &copy)
		*this = copy;
}

Brain::~Brain(void) {
	
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator = (const Brain &brain) {
	
	if (this == &brain)
		return (*this); 
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}

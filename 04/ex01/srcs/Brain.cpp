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
	
	
}

Brain::Brain(const Brain &copy) {
	
	(void)copy;
}

Brain::~Brain(void) {
	
	
}

Brain &Brain::operator = (const Brain &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

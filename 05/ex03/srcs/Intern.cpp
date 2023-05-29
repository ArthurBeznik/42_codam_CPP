/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 11:56:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

/**
 * Constructors - Destructors
*/
Intern::Intern(void) {
	
	
}

Intern::Intern(const Intern &copy) {
	
	(void)copy;
}

Intern::~Intern(void) {
	
	
}

/**
 * Operator overloads
*/
Intern	&Intern::operator = (const Intern &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

/**
 * Getters - Setters
*/
Intern	*Intern::getVariable(void) const {

	return (this->);
	// return ();
}

/**
 * Other functions
*/


/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 11:56:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

/**
 * Constructors - Destructors
*/
PresidentialPardonForm::PresidentialPardonForm(void) {
	
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	
	(void)copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	
	
}

/**
 * Operator overloads
*/
PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

/**
 * Getters - Setters
*/
PresidentialPardonForm	*PresidentialPardonForm::getVariable(void) const {

	return (this->);
	// return ();
}

/**
 * Other functions
*/


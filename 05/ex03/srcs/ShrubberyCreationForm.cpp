/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 11:56:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

/**
 * Constructors - Destructors
*/
ShrubberyCreationForm::ShrubberyCreationForm(void) {
	
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
	
	(void)copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	
	
}

/**
 * Operator overloads
*/
ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

/**
 * Getters - Setters
*/
ShrubberyCreationForm	*ShrubberyCreationForm::getVariable(void) const {

	return (this->);
	// return ();
}

/**
 * Other functions
*/


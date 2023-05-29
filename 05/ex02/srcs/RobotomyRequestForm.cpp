/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 11:56:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

/**
 * Constructors - Destructors
*/
RobotomyRequestForm::RobotomyRequestForm(void) {
	
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
	
	(void)copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	
	
}

/**
 * Operator overloads
*/
RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

/**
 * Getters - Setters
*/
RobotomyRequestForm	*RobotomyRequestForm::getVariable(void) const {

	return (this->);
	// return ();
}

/**
 * Other functions
*/


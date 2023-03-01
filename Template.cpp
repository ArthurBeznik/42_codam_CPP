/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Template.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 11:56:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Template.hpp>

/**
 * Constructors - Destructors
*/
Template::Template(void) {
	
	
}

Template::Template(const Template &copy) {
	
	(void)copy;
}

Template::~Template(void) {
	
	
}

/**
 * Operator overloads
*/
Template	&Template::operator = (const Template &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

/**
 * Getters - Setters
*/
Template	*Template::getVariable(void) const {

	return (this->);
	// return ();
}

/**
 * Other functions
*/


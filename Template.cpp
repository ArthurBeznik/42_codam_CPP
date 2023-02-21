/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Template.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:54:15 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Template.hpp>

Template::Template(void) {
	
	
}

Template::Template(const Template &copy) {
	
	(void)copy;
}

Template::~Template(void) {
	
	
}

Template &Template::operator = (const Template &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

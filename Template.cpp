/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Template.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:28:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

Template::Template() {}

Template::Template(const Template& copy) { (void)copy; }

Template::~Template() {}

Template & Template::operator=(const Template& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}

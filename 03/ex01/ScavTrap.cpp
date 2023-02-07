/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/06 16:57:16 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	
	
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
	
	(void)copy;
}

ScavTrap::~ScavTrap(void) {
	
	
}

ScavTrap & ScavTrap::operator=(const ScavTrap& op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

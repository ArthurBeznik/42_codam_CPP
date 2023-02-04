/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:28:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string name, Weapon& weapon): _weapon(weapon), _name(name) {
	
	return ;
}

void	HumanA::setName(const std::string name) {
	
	this->_name = name;
}

std::string	HumanA::getName(void) {

	return this->_name;
}

void	HumanA::setWeapon(Weapon &weapon) {
	
	this->_weapon = weapon;
}

Weapon	HumanA::getWeapon(void) {

	return this->_weapon;
}

void	HumanA::attack(void) {

	Weapon weapon = getWeapon();

	std::cout << this->getName();
	std::cout << " attacks with his ";
	std::cout << weapon.getType() << std::endl;
}

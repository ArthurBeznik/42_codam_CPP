/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:28:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string name): _weapon(NULL), _name(name) {
	
	return ;
}

void	HumanB::setName(const std::string name) {
	
	this->_name = name;
}

std::string	HumanB::getName(void) {

	return this->_name;
}

void	HumanB::setWeapon(Weapon &weapon) {
	
	this->_weapon = &weapon;
}

Weapon	*HumanB::getWeapon(void) {

	return this->_weapon;
}

void	HumanB::attack(void) {

	Weapon *weapon = getWeapon();

	std::cout << this->getName();
	std::cout << " attacks with his ";
	if (weapon)
		std::cout << weapon->getType() << std::endl;
	else
		std::cout << "bare hands" << std::endl;
}


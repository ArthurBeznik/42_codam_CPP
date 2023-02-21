/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 14:52:34 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("N/A", 100, 100, 30) {
	
	announce(this->_name, FRAG);
	std::cout << " has been created!" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 30) {
	
	announce(this->_name, FRAG);
	std::cout << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	
	if (this != &copy) {
		*this = copy;
	}
}

FragTrap::~FragTrap(void) {
	
	announce(this->_name, FRAG);
	std::cout << " died!" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &frag) {
	
	if (this == &frag) {
		return *this;
	}
	ClapTrap::operator=(frag);
	this->_name = frag._name;
	this->_hitPoints = frag._hitPoints;
	this->_energyPoints = frag._energyPoints;
	this->_attackDamage = frag._attackDamage;
	return (*this);
}

/**
 * Special ability
*/
void	FragTrap::highFivesGuys(void) {
	
	announce(this->_name, FRAG);
	std::cout << " requests a high five!" << std::endl;
}

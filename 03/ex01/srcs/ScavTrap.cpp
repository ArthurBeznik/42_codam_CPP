/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 11:12:45 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(void): ClapTrap("N/A", 100, 50, 20) {
	
	announce(this->_name, SCAV);
	std::cout << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name, 100, 50, 20) {
	
	announce(this->_name, SCAV);
	std::cout << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
	
	if (this != &copy) {
		*this = copy;
	}
}

ScavTrap::~ScavTrap(void) {
	
	announce(this->_name, SCAV);
	std::cout << " died!" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scav) {
	
	if (this == &scav) {
		return *this;
	}
	ClapTrap::operator=(scav);
	this->_name = scav._name;
	this->_hitPoints = scav._hitPoints;
	this->_energyPoints = scav._energyPoints;
	this->_attackDamage = scav._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate() {
	
	announce(this->_name, SCAV);
	std::cout << " has entered gatekeeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	
	// logger(this->_name, this->_energyPoints, this->_hitPoints, BEFORE); // ? testing
	announce(this->_name, SCAV);
	if (this->_energyPoints == 0 || this->_hitPoints == 0) {
		std::cout << " does not have enough EP and/or HP" << std::endl;
		return ;
	}
	std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	// logger(this->_name, this->_energyPoints, this->_hitPoints, AFTER); // ? testing
}

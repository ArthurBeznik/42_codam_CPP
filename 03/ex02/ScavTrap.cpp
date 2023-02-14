/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/14 11:46:12 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("N/A", 100, 50, 20) {
	
	announce(_name, SCAV);
	std::cout << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name, 100, 50, 20) {
	
	announce(_name, SCAV);
	std::cout << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
	
	if (this != &copy) {
		*this = copy;
	}
}

ScavTrap::~ScavTrap(void) {
	
	announce(_name, SCAV);
	std::cout << " died!" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scav) {
	
	if (this == &scav) {
		return *this;
	}
	ClapTrap::operator=(scav);
	_name = scav._name;
	_hitPoints = scav._hitPoints;
	_energyPoints = scav._energyPoints;
	_attackDamage = scav._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	
	announce(_name, SCAV);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP and/or HP" << std::endl;
		return ;
	}
	std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	
	announce(_name, SCAV);
	std::cout << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	
	announce(_name, SCAV);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP OR HP" << std::endl;
		return ;
	}
	std::cout << " repairs himself and gets " << amount << " hit points back!" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
}

void	ScavTrap::guardGate() {
	
	announce(_name, SCAV);
	std::cout << " has entered gatekeeper mode" << std::endl;
}

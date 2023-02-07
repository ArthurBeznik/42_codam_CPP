/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/07 18:59:51 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	announce(std::string const &name) {
	
	std::cout << "ClapTrap " << name;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	
	announce(_name);
	std::cout << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	
	if (this != &copy) {
		*this = copy;
	}
	announce(_name);
}

ClapTrap::~ClapTrap(void) {
	
	announce(_name);
	std::cout << " died!" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &clap) {
	
	if (this == &clap) {
		return *this;
	}
	_name = clap._name;
	_hitPoints = clap._hitPoints;
	_energyPoints = clap._energyPoints;
	_attackDamage = clap._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	
	announce(_name);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP and/or HP" << std::endl;
		return ;
	}
	std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	announce(_name);
	std::cout << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	announce(_name);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP OR HP" << std::endl;
		return ;
	}
	std::cout << " repairs himself and gets " << amount << " hit points back!" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
}

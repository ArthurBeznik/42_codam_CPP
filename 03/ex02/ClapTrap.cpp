/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/13 18:27:38 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	announce(std::string const &name, int whichTrap) {
	
	if (whichTrap == 0) {
		std::cout << "ClapTrap " << name;
	} else if (whichTrap == 1) {
		std::cout << "ScavTrap " << name;
	} else if (whichTrap == 2) {
		std::cout << "FragTrap " << name;
	}
}

ClapTrap::ClapTrap(): _name("N/A"), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	
	announce(_name, CLAP);
}

ClapTrap::ClapTrap(std::string const &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage): _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage) {
	
	announce(_name, CLAP);
	std::cout << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	
	if (this != &copy) {
		*this = copy;
	}
	announce(_name, CLAP);
}

ClapTrap::~ClapTrap(void) {
	
	announce(_name, CLAP);
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
	
	announce(_name, CLAP);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP and/or HP" << std::endl;
		return ;
	}
	std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

/**
 * can he take dmg if aleady at 0?
*/
void	ClapTrap::takeDamage(unsigned int amount) {
	
	announce(_name, CLAP);
	std::cout << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
}

/**
 * can he repair more than default init?
*/
void	ClapTrap::beRepaired(unsigned int amount) {
	
	announce(_name, CLAP);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP OR HP" << std::endl;
		return ;
	}
	std::cout << " repairs himself and gets " << amount << " hit points back!" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
}

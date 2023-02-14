/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/14 11:46:28 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("N/A", 100, 100, 30) {
	
	announce(_name, FRAG);
	std::cout << " has been created!" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 30) {
	
	announce(_name, FRAG);
	std::cout << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	
	if (this != &copy) {
		*this = copy;
	}
}

FragTrap::~FragTrap(void) {
	
	announce(_name, FRAG);
	std::cout << " died!" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &frag) {
	
	if (this == &frag) {
		return *this;
	}
	ClapTrap::operator=(frag);
	_name = frag._name;
	_hitPoints = frag._hitPoints;
	_energyPoints = frag._energyPoints;
	_attackDamage = frag._attackDamage;
	return (*this);
}

void	FragTrap::attack(const std::string &target) {
	
	announce(_name, FRAG);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP and/or HP" << std::endl;
		return ;
	}
	std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	FragTrap::takeDamage(unsigned int amount) {
	
	announce(_name, FRAG);
	std::cout << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
}

void	FragTrap::beRepaired(unsigned int amount) {
	
	announce(_name, FRAG);
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << " does not have enough EP OR HP" << std::endl;
		return ;
	}
	std::cout << " repairs himself and gets " << amount << " hit points back!" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
}

void	FragTrap::highFivesGuys(void) {
	
	announce(_name, FRAG);
	std::cout << " requests a high five!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/20 16:41:52 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	announce(std::string const &name, int whichTrap) {
	
	if (whichTrap == 0) {
		std::cout << "ClapTrap ";
	} else if (whichTrap == 1) {
		std::cout << "ScavTrap ";
	}
	std::cout << name;
}

ClapTrap::ClapTrap(): _name("N/A"), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	
	announce(this->_name, CLAP);
}

ClapTrap::ClapTrap(std::string const &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage): _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage) {
	
	announce(this->_name, CLAP);
	std::cout << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	
	if (this != &copy) {
		*this = copy;
	}
	announce(this->_name, CLAP);
}

ClapTrap::~ClapTrap(void) {
	
	announce(this->_name, CLAP);
	std::cout << " died!" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &clap) {
	
	if (this == &clap) {
		return *this;
	}
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	
	std::cout << "\tbefore - " << this->_name << "\tEP: " << this->_energyPoints << " / HP: " << this->_hitPoints << std::endl; // ? testing
	announce(this->_name, CLAP);
	if (this->_energyPoints == 0 || this->_hitPoints == 0) {
		std::cout << " does not have enough EP and/or HP" << std::endl;
		return ;
	}
	std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << "\tafter - " << this->_name << "\tEP: " << this->_energyPoints << " / HP: " << this->_hitPoints << std::endl; // ? testing
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	std::cout << "\tbefore - " << this->_name << "\tEP: " << this->_energyPoints << " / HP: " << this->_hitPoints << std::endl; // ? testing
	announce(this->_name, CLAP);
	std::cout << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	std::cout << "\tafter - " << this->_name << "\tEP: " << this->_energyPoints << " / HP: " << this->_hitPoints << std::endl; // ? testing
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	std::cout << "\tbefore - " << this->_name << "\tEP: " << this->_energyPoints << " / HP: " << this->_hitPoints << std::endl; // ? testing
	announce(this->_name, CLAP);
	if (this->_energyPoints == 0 || this->_hitPoints == 0) {
		std::cout << " does not have enough EP OR HP" << std::endl;
		return ;
	}
	std::cout << " repairs himself and gets " << amount << " hit points back!" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "\tafter - " << this->_name << "\tEP: " << this->_energyPoints << " / HP: " << this->_hitPoints << std::endl; // ? testing
}

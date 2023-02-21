/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:33:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

void	announce(std::string const &name) {
	
	std::cout << "ClapTrap " << name;
}

ClapTrap::ClapTrap(void): _name("N/A"), _hitPoints(10), _energyPoints(10), _attackDamage(0)  {

	announce(this->_name);
	std::cout << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	
	announce(this->_name);
	std::cout << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	
	if (this != &copy) {
		*this = copy;
	}
	announce(this->_name);
	std::cout << " has been created (by copy)!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	
	announce(this->_name);
	std::cout << " died!" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &clap) {
	
	if (this == &clap) {
		return (*this);
	}
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	
	announce(this->_name);
	if (this->_energyPoints == 0 || this->_hitPoints == 0) {
		std::cout << " does not have enough EP or HP" << std::endl;
		return ;
	}
	std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	// std::cout << "\tEP: " << _energyPoints << " / HP: " << _hitPoints << std::endl; // ? testing
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	announce(this->_name);
	std::cout << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	// std::cout << "\tEP: " << _energyPoints << " / HP: " << _hitPoints << std::endl; // ? testing

}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	announce(this->_name);
	if (this->_energyPoints == 0 || this->_hitPoints == 0) {
		std::cout << " does not have enough EP or HP" << std::endl;
		return ;
	}
	std::cout << " repairs himself and gets " << amount << " hit points back!" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
	// std::cout << "\tEP: " << _energyPoints << " / HP: " << _hitPoints << std::endl; // ? testing
}

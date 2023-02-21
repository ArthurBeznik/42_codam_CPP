/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:07:41 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : _name("N/A"),
					   _hitPoints(10),
					   _energyPoints(10),
					   _attackDamage(10)
{

	announce(this->_name, CLAP);
	std::cout << " has been created!" << std::endl;
}

// ClapTrap::ClapTrap(std::string const &name,
// 				   unsigned int hitPoints,
// 				   unsigned int energyPoints,
// 				   unsigned int attackDamage) : _name(name),
// 												_hitPoints(hitPoints),
// 												_energyPoints(energyPoints),
// 												_attackDamage(attackDamage)
// {

// 	announce(this->_name, CLAP);
// 	std::cout << " has been created!" << std::endl;
// }

ClapTrap::ClapTrap(std::string const &name,
				   unsigned int hitPoints,
				   unsigned int energyPoints,
				   unsigned int attackDamage)
{

	this->_name = name;
	if (hitPoints < 0) {
		std::cout << "ERROR" << std::endl;
		return ;
	}
	this->_hitPoints = hitPoints;
	this->_energyPoints = energyPoints;
	this->_attackDamage = attackDamage;
	announce(this->_name, CLAP);
	std::cout << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {

	if (this != &copy)
	{
		*this = copy;
	}
	announce(this->_name, CLAP);
}

ClapTrap::~ClapTrap(void) {

	announce(this->_name, CLAP);
	std::cout << " died!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap) {

	if (this == &clap)
	{
		return *this;
	}
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	return (*this);
}

/**
 * Actions.
*/
void ClapTrap::attack(const std::string &target) {
	
	// logger(this->_name, this->_energyPoints, this->_hitPoints, BEFORE); // ? testing
	announce(this->_name, CLAP);
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << " does not have enough EP and/or HP" << std::endl;
		return;
	}
	std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	// logger(this->_name, this->_energyPoints, this->_hitPoints, AFTER); // ? testing
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	// logger(this->_name, this->_energyPoints, this->_hitPoints, BEFORE); // ? testing
	announce(this->_name, NA);
	std::cout << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	// logger(this->_name, this->_energyPoints, this->_hitPoints, AFTER); // ? testing
}

void ClapTrap::beRepaired(unsigned int amount) {
	
	// logger(this->_name, this->_energyPoints, this->_hitPoints, BEFORE); // ? testing
	announce(this->_name, NA);
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << " does not have enough EP OR HP" << std::endl;
		return;
	}
	std::cout << " repairs himself and gets " << amount << " hit points back!" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
	// logger(this->_name, this->_energyPoints, this->_hitPoints, AFTER); // ? testing
}

/**
 * Utils.
*/
void	announce(std::string const &name, int whichTrap) {
	
	if (whichTrap == CLAP) {
		std::cout << "\033[1;32mClapTrap \033[0m";
	} else if (whichTrap == SCAV) {
		std::cout << "\033[1;31mScavTrap \033[0m";
	} else if (whichTrap == FRAG) {
		std::cout << "\033[1;36mFragTrap \033[0m";
	}
	std::cout << name;
}

void	logger(const std::string &name, const int &eP, const int &hP, const int when) {
	
	if (when == BEFORE) {
		std::cout << "\t[before] " << name << "\tEP: " << eP << " | HP: " << hP;
	} else if (when == AFTER) {
		std::cout << "\t[after] " << name << "\tEP: " << eP << " | HP: " << hP;
	}
	std::cout << std::endl;
}

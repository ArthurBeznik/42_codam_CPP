/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:48:03 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/02 14:15:47 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	
}

void    Zombie::setName(std::string name) {
	
    this->_name = name;
}

void    Zombie::announce(void) {

	printStr(this->_name + ": BraiiiiiiinnnzzzZ...");
}

Zombie::~Zombie(void) {

	printStr(this->_name + " has died");
}

void    printStr(std::string str) {

    std::cout << str << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 14:01:38 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/02 13:54:38 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
    
    printStr(_name + " has risen!");
}

Zombie::~Zombie(void) {

    printStr(_name + " found a cure!");
}

void    Zombie::announce(void) {

    printStr(_name + ": BraiiiiiiinnnzzzZ...");
}

void    printStr(std::string str) {

    std::cout << str << std::endl;
}

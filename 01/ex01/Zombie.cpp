/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:48:03 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 15:07:49 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
    
    printStr(_name + ": has risen!");
}

Zombie::~Zombie(void) {

    printStr(_name + ": found a cure!");
    
}

void    Zombie::announce(void) {

    printStr(_name + ": BraiiiiiiinnnzzzZ...");
}

void    printStr(std::string str) {

    std::cout << str << std::endl;
}

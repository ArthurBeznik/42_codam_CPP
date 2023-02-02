/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:46:18 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/02 14:14:05 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	
    Zombie *horde = new Zombie[N];
	
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}

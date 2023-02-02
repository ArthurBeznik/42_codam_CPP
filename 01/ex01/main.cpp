/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:48:13 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/02 14:13:17 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    Zombie	*horde;
	int		N = 3;

    horde = zombieHorde(N, "Arthur");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete [] horde;
    return (0);
}

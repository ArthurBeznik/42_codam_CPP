/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:48:13 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/07 14:57:51 by abeznik       ########   odam.nl         */
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

	// while (1) {
		
	// } // ? testing for leaks
	
    return (0);
}

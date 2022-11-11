/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:48:13 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/10 14:56:43 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

	int		N = 3;
	Zombie*	horde = zombieHorde(N, "Arthur");

	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}
	// horde->~Zombie();
	// horde->~Zombie();
	// horde->~Zombie();
	// delete horde;
	// delete [] horde;
	
	system("leaks ex01");
	
	return (0);
}

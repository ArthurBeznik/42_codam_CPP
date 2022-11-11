/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:46:18 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:26:39 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {

	Zombie*	a[N];
	// Zombie*	b;

	// b = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		a[i] = new Zombie(name);
		a[i]->announce();
	}

	return (*a);
}

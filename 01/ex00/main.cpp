/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 13:59:44 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/10 12:47:20 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

	Zombie*	heap = newZombie("Heap");
	randomChump("Stack");

	heap->announce();
	
	delete heap;
	
	return (0);
}

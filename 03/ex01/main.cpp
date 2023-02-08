/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 18:25:17 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 17:42:47 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

void	testScav() {
	
	ScavTrap	scav("Arthur");
	ScavTrap	secondScav("Jules");
	
	scav.attack("Jules");

	// for (int x = 0; x < 200; x++) {
	// 	scav.attack("test");
	// } // ? testing loop until no EP/HP left
	
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();

	// Copy assignment operator test
	secondScav = scav;
	secondScav.attack("Maxime");
}

int main(void) {
	
	testScav();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 18:25:17 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/20 16:31:44 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

void	testBoth(void) {
	
	ScavTrap	scav("Arthur");
	ScavTrap	secondScav("Jules");
	ClapTrap	clap("Thomas", 50, 25, 10);
	ClapTrap	secondClap("Roger", 50, 25, 10);
	
	scav.attack("Jules");
	clap.attack("Arthur");

	/**
	 * ? testing loop until no EP/HP left
	*/
	// for (int x = 0; x < 200; x++) {
	// 	scav.attack("test");
	// 	clap.attack("test");
	// }
	
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();

	clap.beRepaired(10);
	clap.takeDamage(10);
	
	/**
	 * ? Copy assignment operator test
	*/
	clap = scav;
	clap.attack("Maxime");
}

void	testClap(void) {
	
	ClapTrap	clap("Thomas", 50, 25, 10);
	ClapTrap	secondClap("Roger", 50, 25, 10);
	
	clap.attack("Arthur");
	secondClap.attack("Jules");

	/**
	 * ? testing loop until no EP/HP left
	*/
	// for (int x = 0; x < 50; x++) {
	// 	clap.attack("test");
	// }
	
	clap.beRepaired(10);
	clap.takeDamage(10);

	/**
	 * ? Copy assignment operator test
	*/
	secondClap = clap;
	secondClap.attack("Maxime");
}

void	testScav(void) {
	
	ScavTrap	scav("Arthur");
	ScavTrap	secondScav("Jules");
	
	scav.attack("Jules");

	/**
	 * ? testing loop until no EP/HP left
	*/
	// for (int x = 0; x < 100; x++) {
	// 	scav.attack("test");
	// }
	
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();

	/**
	 * ? Copy assignment operator test
	*/
	secondScav = scav;
	secondScav.attack("Maxime");
}

int main(void) {
	
	/**
	 * Test ScavTrap alone
	*/
	std::cout << "------------------ Testing ScavTrap ------------------" << std::endl;
	testScav();
	std::cout << std::endl;
	
	/**
	 * Test ClapTrap alone
	*/
	std::cout << "------------------ Testing ClapTrap ------------------" << std::endl;
	testClap();
	std::cout << std::endl;

	/**
	 * Test both Traps
	*/
	std::cout << "------------------ Testing both ------------------" << std::endl;
	testBoth();
	
	return (0);
}

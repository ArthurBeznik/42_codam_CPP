/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 18:25:17 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:38:48 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

static void	testAll(void) {
	
	FragTrap	frag("Jospeh");
	FragTrap	secondFrag("Roger");
	ScavTrap	scav("Arthur");
	ScavTrap	secondScav("Jules");
	ClapTrap	clap("Thomas", 50, 25, 10);
	ClapTrap	secondClap("Roger", 50, 25, 10);
	
	frag.attack("Roger");
	scav.attack("Jules");
	clap.attack("Arthur");

	/**
	 * ? testing loop until no EP/HP left
	*/
	// for (int x = 0; x < 200; x++) {
	//	frag.attack("test");
	// 	scav.attack("test");
	// 	clap.attack("test");
	// }

	frag.beRepaired(10);
	frag.takeDamage(10);
	frag.highFivesGuys();
	
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();

	clap.beRepaired(10);
	clap.takeDamage(10);

	std::cout << std::endl;
}

static void	testClap(void) {
	
	ClapTrap	clap("Thomas", 50, 25, 10);
	ClapTrap	secondClap("Roger", 50, 25, 10);
	ClapTrap	thirdClap;
	
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
	
	secondClap.beRepaired(100);

	/**
	 * ? Copy assignment operator test
	*/
	secondClap = clap;
	secondClap.attack("Maxime");

	std::cout << std::endl;
}

static void	testScav(void) {
	
	ScavTrap	scav("Arthur");
	ScavTrap	secondScav("Jules");
	
	scav.attack("Jules");

	/**
	 * ? testing loop until no EP/HP left
	*/
	for (int x = 0; x < 100; x++) {
		scav.attack("test");
	}
	
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();

	/**
	 * ? Copy assignment operator test
	*/
	secondScav = scav;
	secondScav.attack("Maxime");

	std::cout << std::endl;
}

static void	testFrag(void) {
	
	FragTrap	frag("Skip");
	FragTrap	secondFrag("Roger");
	FragTrap	thirdFrag;
	FragTrap	fourthFrag(frag);
	
	frag.attack("Roger");
	thirdFrag.attack("Roger");

	// for (int x = 0; x < 200; x++) {
	// 	scav.attack("test");
	// } // ? testing loop until no EP/HP left
	
	frag.beRepaired(10);
	frag.takeDamage(10);
	frag.highFivesGuys();

	// Copy assignment operator test
	secondFrag = frag;
	secondFrag.attack("Luc");

	std::cout << std::endl;
}

int main(void) {

	/**
	 * Test FragTrap alone
	*/
	std::cout << "------------------ Testing FragTrap ------------------" << std::endl;
	testFrag();
	std::cout << std::endl;
	
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
	testAll();
	
	return (0);
}

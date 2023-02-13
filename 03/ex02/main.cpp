/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 18:25:17 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/13 17:15:05 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

static void otherTest(void) {
	
	{
		FragTrap fr4gtp("fr4gtp");

		fr4gtp.attack("Handsome Jack");
		fr4gtp.takeDamage(6);
		fr4gtp.beRepaired(4);
		fr4gtp.takeDamage(3);
		fr4gtp.highFivesGuys();
		fr4gtp.beRepaired(8);
		fr4gtp.takeDamage(17);
		std::cout << std::endl;
	}
	{
		ScavTrap sc4vtp("sc4vtp");

		sc4vtp.attack("Handsome Jack");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
		std::cout << std::endl;
	}
	{
		ClapTrap cl4ptp("cl4ptp", 10, 10, 3);

		cl4ptp.attack("Handsome Jack");
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
		std::cout << std::endl;
	}
}

static void	testFrag() {
	
	FragTrap	frag("Jospeh");
	FragTrap	secondFrag("Roger");
	
	frag.attack("Roger");

	// for (int x = 0; x < 200; x++) {
	// 	scav.attack("test");
	// } // ? testing loop until no EP/HP left
	
	frag.beRepaired(10);
	frag.takeDamage(10);
	frag.highFivesGuys();

	// Copy assignment operator test
	secondFrag = frag;
	secondFrag.attack("Joseph");

	std::cout << std::endl;
}

static void	testScav() {
	
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

	std::cout << std::endl;
}

int main(void) {
	
	testScav();
	testFrag();
	otherTest();
	return (0);
}

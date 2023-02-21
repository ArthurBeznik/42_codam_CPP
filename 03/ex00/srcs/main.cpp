/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 18:25:17 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:37:50 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <ClapTrap.hpp>

/**
 * attack: target - <attack damage> HP
 * repair: clap + <amount> HP
 * attack & repair: clap - 1 EP
 * if 0 EP or 0 HP => no action
*/
int	main(void) {

	ClapTrap	clap("Arthur");	// start: 		= 10 EP 10 HP
	ClapTrap	test;
	ClapTrap	copyClap(clap);

	clap.attack("Maxime");		// -1 EP 		= 9 EP 10 HP
	clap.beRepaired(1);			// -1 EP +1 HP	= 8 EP 11 HP
	clap.takeDamage(5);			// -5 HP		= 8 EP 6 HP

	/**
	 * looping until clap has no EP/HP left (-1 EP on each loop)
	*/
	for (int x = 0; x < 20; x++) {
		clap.attack("test");
	}
	
	/**
	 * Should not work
	*/
	clap.attack("Jules");
	clap.attack("Thomas");
	clap.attack("Celestin");
	clap.attack("Gonzague");
	clap.attack("Jacques");
	clap.attack("Pierre");
	
	return (0);
}

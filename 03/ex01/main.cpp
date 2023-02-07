/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 18:25:17 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/07 18:59:41 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void) {

	ClapTrap clap("Arthur");

	clap.attack("Maxime");		// 9 EP
	clap.beRepaired(1);			// 8 EP
	clap.takeDamage(5);
	
	clap.attack("Thomas");		// 7
	clap.attack("Jules");		// 6
	clap.attack("Celestin");	// 5
	clap.attack("Gonzague");	// 4
	clap.attack("Patrice");		// 3
	clap.attack("Herve");		// 2
	clap.attack("Jacques");		// 1
	clap.attack("Pierre");		// 0 after this attack
	
	/**
	 * Should not work
	*/
	clap.attack("Maxime");
	clap.attack("Maxime");
	clap.attack("Maxime");
	clap.attack("Maxime");
	clap.attack("Maxime");
	clap.attack("Maxime");
	
	return (0);
}
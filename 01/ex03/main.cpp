/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:31:12 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/07 15:02:05 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

#include <iostream>

/**
 * It's better to use a reference to Weapon for HumanA because HumanA always 
 * has a weapon and it makes no sense to dynamically allocate memory for it. 
 * On the other hand, HumanB may or may not have a weapon, so it's better to 
 * use a pointer to Weapon to handle the case where HumanB is unarmed.
*/
int main(void) {
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
	// while (1) {
		
	// } // ? testing for leaks

	return (0);
}

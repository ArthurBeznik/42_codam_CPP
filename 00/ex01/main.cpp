/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 10:18:05 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/09 09:32:10 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main( void ) {
	
	PhoneBook	phonebook;
	std::string	input;
	std::string commandMenu = 
		"\nEnter a command:\n\t1. ADD\n\t2. SEARCH\n\t3. EXIT\n";

	while (input != "EXIT" && !std::cin.eof()) {
		printStr(commandMenu + "\n");
		std::getline(std::cin, input);
		if (input == "ADD") {
			phonebook.addContact();
		} else if (input == "SEARCH") {
			phonebook.searchContact();
		} else if (input == "EXIT" || std::cin.eof()) {
			break;
		} else {
			printStr("Please enter a valid command!\n");
		}
	}	
	return (0);
}

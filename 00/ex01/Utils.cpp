/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:49:06 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/09 11:00:14 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include "Contact.class.hpp"

void	printInfo( std::string str ) {
	
	std::cout << "|" << str;
}

void	printStr( std::string str ) {
	
	std::cout << str;
}

void	printChar( char c ) {
	
	std::cout << c << std::endl;
}

void	printInt( int i ) {
	
	std::cout << i;
}

/**
 * Gets the index based on the input given.
 * 	Input is a str, 
*/
int	getInputIndex( std::string input ) {

	int index;

	if (input.size() == 1 && input[0] >= '1' && input[0] <= '8') {
		index = input[0] - 1 - '0';
	} else {
		index = -1;
		printStr("Invalid index!\n");
	}
	return (index);
}

int	getDisplayIndex( int input ) {

	int index;

	index = input - 1 - '0';
	return (index);
}

std::string	addSpaces( std::string str, int spaces ) {

	std::string	formattedText;

	for (int i = 0; i < spaces; ++i) {
		formattedText = str.insert(0, " ");
	}
	return (formattedText);
}

std::string	formatText( std::string str ) {

	int	strSize = str.size();

	if (strSize < 10) {
		int spaces = 10 - strSize;
		str = addSpaces(str, spaces);
	} else {
		str.resize(9, '.');
		str.append(".");
	}
	return (str);
}

/**
 * Loops until index is 8 (nb of contacts)
*/
int	displaySavedContacts( Contact contacts[8] ) {

	int			i;
	int			c;
	std::string	str;
	int			index;

	printStr("=============================================\n");
	printStr("|  Index   |First Name|Last Name | Nickname |\n");
	printStr("|----------|----------|----------|----------|\n");

	i = 0;
	c = '0';
	while (++c <= '8') {
		index = getDisplayIndex(c);
		if (contacts[index].getFirstName().size() && ++i) {
			str = c;
			str = formatText(str);
			printInfo(str);
			
			str = formatText(contacts[index].getFirstName());
			printInfo(str);
			
			str = formatText(contacts[index].getLastName());
			printInfo(str);
			
			str = formatText(contacts[index].getNickName());
			printInfo(str);
		} else {
			str = formatText(EMPTY);
			printInfo(str);
			printInfo(str);
			printInfo(str);
			printInfo(str);
		}
		printStr("|\n");
	}
	printStr("=============================================\n");
	return (i);
}

int	promptUserInfo( Contact contacts[8], int index, int columnIndex ) {

	std::string	input;
	
	input = EMPTY;
	while (!std::cin.eof() && input == EMPTY) {
		switch (columnIndex)
		{
			case 0:
				printStr("Enter first name: ");
				if (std::getline(std::cin, input) && input != EMPTY) {
					contacts[index % 8].setFirstName(input);
				} else {
					printStr("Empty value!\n");
				}
				break;
			case 1:
				printStr("Enter last name: ");
				if (std::getline(std::cin, input) && input != EMPTY) {
					contacts[index % 8].setLastName(input);
				} else {
					printStr("Empty value!\n");
				}
				break;
			case 2:
				printStr("Enter nick name: ");
				if (std::getline(std::cin, input) && input != EMPTY) {
					contacts[index % 8].setNickName(input);
				} else {
					printStr("Empty value!\n");
				}
				break;
			case 3:
				printStr("Enter phone number: ");
				if (std::getline(std::cin, input) && input != EMPTY) {
					contacts[index % 8].setPhoneNumber(input);
				} else {
					printStr("Empty value!\n");
				}
				break;
			case 4:
				printStr("Enter darkest secret: ");
				if (std::getline(std::cin, input) && input != EMPTY) {
					contacts[index % 8].setDarkestSecret(input);
				} else {
					printStr("Empty value!\n");
				}
				break;
		}
	}
	return (0);
}

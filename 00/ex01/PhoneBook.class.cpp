/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 10:10:46 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/09 10:59:31 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

/**
 * Constructor. Initialiases the index at 0.
*/
PhoneBook::PhoneBook( void ) {

	this->_index = 0;
	printStr("\n\t\t======================================\n \
		|| Welcome to the crappy phonebook! ||\n \
		======================================\n");
	return;
}

/**
 * Destructor.
*/
PhoneBook::~PhoneBook( void ) {

	printStr("\t\t==========================================\n \
		|| Putting back the crappy phonebook on ||\n \
		|| the dusty shelf (where it belongs)!  ||\n \
		==========================================\n");
	return;
}

void	PhoneBook::addContact( void ) {

	std::string	input;

	// when already 8 contacts saved
	if (this->_index > 7) {
		printStr("\tYou have (already) reached the maximum number of saved contacts. \
			\n\tReplacing the oldest contact: ");
		printStr(this->_contacts[this->_index % 8].getFirstName() + "\n");
	}

	// prompt new user input
	for (int i = 0; i < 5; ++i) {
		promptUserInfo(this->_contacts, this->_index, i);
	}
	
	// display new user has been saved
	if (this->_contacts[this->_index % 8].getDarkestSecret().size()) {
		printStr(this->_contacts[this->_index % 8].getFirstName() + " added to phonebook [");
		printInt(this->_index % 8 + 1);
		printStr("/8]\n");
		this->_index++;
	}
	return;
}

void	PhoneBook::displayContact( Contact contact ) {

	printStr("\n\t============================\n");
	printStr("\t|| First name: " + contact.getFirstName() + "\n");
	printStr("\t|| Last name: " + contact.getLastName() + "\n");
	printStr("\t|| Nickname: " + contact.getNickName() + "\n");
	printStr("\t|| Phone number: " + contact.getPhoneNumber() + "\n");
	printStr("\t|| Darkest secret: " + contact.getDarkestSecret() + "\n");
	printStr("\t============================\n");
}

Contact	PhoneBook::getContact( int index ) {

	return (this->_contacts[index % 8]);
}

void	PhoneBook::searchContact( void ) {

	std::string	input;
	int			index;

	// check if phonebook is empty
	if (!displaySavedContacts(this->_contacts)) {
		printStr("PhoneBook is empty!\n");
		return ;
	}

	// loop until EOF, inputting for an index
	// if found a user for given index, break
	while (!std::cin.eof()) {
		printStr("Select an index: ");
		if (std::getline(std::cin, input) && input != EMPTY) {
			index = getInputIndex(input);
			if (index != -1 && this->_contacts[index].getFirstName().size()) {
				break;
			}
		} else {
			printStr("Empty value!\n");
		}
	}

	// display contact with found index
	if (!std::cin.eof()) {
		this->displayContact(this->_contacts[index]);
	}
	return;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 10:10:40 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/04 13:01:56 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) {

	// std::cout << "Contact - Constructor called" << std::endl;
	// return;
}

Contact::~Contact( void ) {

	// std::cout << "Contact - Destructor called" << std::endl;
	// return;
}

std::string	Contact::getFirstName( void ) const {

	return (this->_firstName);
}

std::string	Contact::getLastName( void ) const {

	return (this->_lastName);
}

std::string	Contact::getNickName( void ) const {

	return (this->_nickName);
}

std::string	Contact::getPhoneNumber( void ) const {

	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret( void ) const {

	return (this->_darketDarkestSecret);
}

void	Contact::setFirstName( std::string str ) {

	this->_firstName = str;
}

void	Contact::setLastName( std::string str ) {
	
	this->_lastName = str;
}

void	Contact::setNickName( std::string str ) {
	
	this->_nickName = str;
}

void	Contact::setPhoneNumber( std::string str ) {
	
	this->_phoneNumber = str;
}

void	Contact::setDarkestSecret( std::string str ) {
	
	this->_darketDarkestSecret = str;
}

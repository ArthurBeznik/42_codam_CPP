/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 10:03:34 by abeznik       #+#    #+#                 */
/*   Updated: 2022/10/04 15:04:33 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class Contact {

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string	_darketDarkestSecret;

	public:
		Contact( void );
		~Contact( void );

		std::string	getFirstName( void ) const;
		std::string	getLastName( void ) const;
		std::string	getNickName( void ) const;
		std::string	getPhoneNumber( void ) const;
		std::string	getDarkestSecret( void ) const;

		void	setFirstName( std::string str );
		void	setLastName( std::string str );
		void	setNickName( std::string str );
		void	setPhoneNumber( std::string str );
		void	setDarkestSecret( std::string str );
};

#endif

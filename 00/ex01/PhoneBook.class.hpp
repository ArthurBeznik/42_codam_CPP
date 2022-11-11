/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 10:00:36 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/03 14:19:49 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include "Utils.hpp"
# include <iostream>

# define EMPTY ""

class PhoneBook {

	private:
		Contact	_contacts[8];
		int		_index;

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void	addContact( void );
		void	searchContact( void );
		void	displayContact( Contact contact );
		Contact	getContact( int index );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:46:35 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/09 11:00:23 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "PhoneBook.class.hpp"

std::string	addSpaces( std::string str, int spaces );

std::string	formatText( std::string str );

int 		displaySavedContacts( Contact contacts[8] );

int			promptUserInfo( Contact contacts[8], int index, int columnIndex );

int	        getIndex( int input );

int     	getInputIndex( std::string input );

void	    printInfo( std::string str );

void	    printStr( std::string str );

void	    printChar( char c );

void	    printInt( int i );

#endif
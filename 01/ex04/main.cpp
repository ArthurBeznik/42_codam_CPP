/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/14 11:39:57 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/07 15:05:21 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
// #include <array> // ? this comes from c++11 => should cause an error on compile

int	sedForLosers(std::string fileName, std::string string1, \
					std::string string2) {

	Sed	sed(fileName, string1, string2);

	if (sed.parseInput())
		return (1);
	if (sed.openFiles())
		return (1);
	if (sed.replace())
		return (1);
	return (0);
}

int	main(int argc, char **argv) {
	
	Logger	logger;

	if (argc != 4)
		return (logger.printError("Wrong number of arguments"));
	if (sedForLosers(argv[1], argv[2], argv[3]))
		return (logger.printError(""));
	
	// while (1) {
		
	// } // ? testing for leaks
	
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/14 11:39:57 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/06 14:39:36 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

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
	return (0);
}

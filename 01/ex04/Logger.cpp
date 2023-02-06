/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 12:10:36 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/06 14:16:23 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void) {

}

Logger::~Logger(void) {
	
}

void	Logger::_printUsage(void) {
	
	std::cout << "Usage: ./ex04 <filename> <string1> <string2>" << std::endl;
}

int	Logger::printError(const std::string errorMsg) {
	
	if (errorMsg != "")
		std::cerr << "Error: " << errorMsg << std::endl;
	this->_printUsage();
	return (1);
}

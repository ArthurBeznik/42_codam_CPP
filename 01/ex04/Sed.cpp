/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 11:53:00 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/06 14:16:04 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string fileName, std::string string1, std::string string2): \
			_fileName(fileName), _s1(string1), _s2(string2) {

	this->_newFileName = fileName.append(".replace");
}

Sed::~Sed(void) {
	
}

int	Sed::parseInput(void) {
	
	// std::string tmp_f1 = ""; // ? testing
	// if (tmp_f1 == "") { // ? testing
	if (this->_fileName == "") {
		std::cerr << "<filename> cannot be empty" << std::endl;
		return (1);
	}
	// std::string tmp_s1 = ""; // ? testing
	// std::string tmp_s2 = ""; // ? testing
	// if (tmp_s1 == "" || tmp_s2 == "") { // ? testing
	if (this->_s1 == "" || this->_s2 == "") {
		std::cerr << "<string1> and/or <string2> cannot be empty" << std::endl;
		return (1);
	}
	return (0);
}

int	Sed::_openInFile(void) {

	if (this->_inFile.is_open())
		this->_inFile.close();
	this->_inFile.open(this->_fileName);
	if (!this->_inFile.is_open()) {
		std::cout << "Error opening infile" << std::endl;
		return (1);
	}
	return (0);
}

int	Sed::_openOutFile(void) {
	
	this->_outFile.open(this->_newFileName);
	if (!this->_outFile.is_open()) {
		std::cout << "Error opening outfile" << std::endl;
		return (1);
	}
	return (0);
}

int	Sed::openFiles(void) {
	
	if (this->_openInFile() || this->_openOutFile())
		return (1);
	return (0);
}

void	Sed::_writeLine(const std::string newLine) {
	
	_outFile.write(&newLine[0], newLine.length());
	_outFile.write("\n", 1);
}

void	Sed::_findAndReplace(std::string line) {
	
	size_t	replaceLen = this->_s1.length();

	for (size_t pos = 0; pos < line.length(); pos++) {
		if (line.compare(pos, replaceLen, this->_s1) == 0)
		{
			line.erase(pos, replaceLen);
			line.insert(pos, this->_s2);
			/* result.replace(pos, replaceLen, replacement); */
		}
	}
	this->_writeLine(line);
}

int	Sed::replace(void) {
	
	std::string	line;
	
	if (this->_s1 == "" || this->_s2 == "") {
		std::cerr << "<string1> and/or <string2> cannot be empty" << std::endl;
		return (1);
	}
	while (std::getline(this->_inFile, line)) {
		this->_findAndReplace(line);
	}
	return (0);
}

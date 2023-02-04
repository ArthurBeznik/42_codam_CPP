/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/14 11:39:57 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/04 13:55:09 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	openFiles(std::string fileName) {
	
	std::ifstream inFile(fileName);
	if (!inFile)
	{
		std::cerr << "Error: unable to open file " << fileName << std::endl;
		return (1);
	}

	std::string outFileName = fileName + ".replace";
	std::ofstream outFile(outFileName);
	if (!outFile)
	{
		std::cerr << "Error: unable to open file " << outFileName << std::endl;
		return (1);
	}

	return (0);
}

int parseInput(int argc, char* argv[]) {

	if (argc != 4) {
		std::cerr << "Error: Wrong usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.length() == 0 || s2.length() == 0) {
		std::cerr << "Strings cannot be empty" << std::endl;
		return (1);
	}

	return (0);
	
}

int main(int argc, char *argv[])
{
	if (parseInput(argc, argv))
		return (1);

	if (openFiles(argv[1]))
		return (1);

	// std::string line;
	// std::string s1 = argv[2];
	// std::string s2 = argv[3];
	// size_t pos;
	// while (getline(inFile, line))
	// {
	// 	while ((pos = line.find(s1)) != std::string::npos)
	// 	{
	// 		line.replace(pos, s1.length(), s2);
	// 	}
	// 	outFile << line << std::endl;
	// }

	// inFile.close();
	// outFile.close();

	return (0);
}

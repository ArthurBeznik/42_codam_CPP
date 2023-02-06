/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 11:43:21 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/06 15:04:16 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>
# include "Logger.hpp"

class Sed {
	
	private:
		const std::string	_fileName;
		std::string			_newFileName;
		const char*			_testOut;
		const std::string	_s1;
		const std::string	_s2;
		std::ifstream		_inFile;
		std::ofstream		_outFile;

		int					_openInFile(const char* fileName);
		int					_openOutFile(const char* fileName);

		void				_findAndReplace(std::string line);
		void				_writeLine(const std::string newLine);

	public:
		Sed(std::string fileName, std::string string1, std::string string2);
		~Sed(void);

		int		parseInput(void);
		int		openFiles(const char* fileName);
		int		replace(void);

};

#endif

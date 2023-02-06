/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 11:43:21 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/06 15:12:30 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>
# include "Logger.hpp"

class Sed {
	
	private:
		std::string			_fileName;
		const std::string	_s1;
		const std::string	_s2;
		std::ifstream		_inFile;
		std::ofstream		_outFile;

		int					_openInFile(void);
		int					_openOutFile(void);

		void				_findAndReplace(std::string line);
		void				_writeLine(const std::string newLine);

	public:
		Sed(std::string fileName, std::string string1, std::string string2);
		~Sed(void);

		int		parseInput(void);
		int		openFiles();
		int		replace(void);

};

#endif

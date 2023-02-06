/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 12:08:27 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/06 14:16:20 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>

class Logger {

	private:
		void	_printUsage(void);

	public:
		Logger(void);
		~Logger(void);

		int		printError(const std::string errorMsg);
		
};

#endif

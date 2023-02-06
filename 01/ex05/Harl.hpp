/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:27:55 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {

    private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
        
	public:
		Harl();
		~Harl();
		
		void	complain(std::string level);

};

#endif

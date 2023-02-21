/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 11:18:54 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include <ClapTrap.hpp>

class FragTrap: public ClapTrap {
        
    public:
        FragTrap();
        FragTrap(std::string const &name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator = (const FragTrap &frag);
        ~FragTrap();

		void	attack(std::string const &target);
		void 	highFivesGuys(void);

};


#endif
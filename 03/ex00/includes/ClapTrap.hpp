/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:27:36 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

    private:
        std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
        
    public:
        ClapTrap();
        ClapTrap(std::string const &name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator = (const ClapTrap &clap);
        ~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};



#endif

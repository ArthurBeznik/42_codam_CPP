/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/20 16:20:38 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define CLAP 0
# define SCAV 1

class ClapTrap {

    protected:
        std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
        
    public:
        ClapTrap();
        ClapTrap(std::string const &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator = (const ClapTrap &clap);
        ~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

void	announce(std::string const &name, int whichTrap);

#endif

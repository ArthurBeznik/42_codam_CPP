/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 11:20:10 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define NA -1
# define CLAP 0
# define SCAV 1
# define FRAG 2

# define BEFORE 3
# define AFTER 4

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

void	logger(const std::string &name, const int &eP, const int &hP, const int when);

void	announce(std::string const &name, int whichTrap);

#endif

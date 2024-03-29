/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:13:41 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <ClapTrap.hpp>

/**
 * "[...] its constructors, destructor and attack() will print different messages."
*/
class ScavTrap: public ClapTrap {
        
    public:
        ScavTrap();
        ScavTrap(std::string const &name);
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator = (const ScavTrap &scav);
        ~ScavTrap();

		void	attack(const std::string &target);
		void 	guardGate(void);		

};


#endif

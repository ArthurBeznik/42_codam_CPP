/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 14:01:40 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/10 12:19:50 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    
    private:
        std::string _name;

    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce(void);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

void    printStr(std::string str);

#endif

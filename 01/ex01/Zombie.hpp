/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:46:52 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/02 14:15:34 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();

        void    announce(void);
		void    setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
void    printStr(std::string str);

#endif
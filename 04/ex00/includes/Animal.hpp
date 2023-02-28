/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:52 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:
		std::string const _type;
        
    public:
		Animal();
        Animal(std::string const &type);
        Animal(const Animal &copy);
        Animal &operator = (const Animal &animal);
        // ~Animal();
		virtual ~Animal();

		virtual void		makeSound() const;
		std::string const	getType() const;

};

std::ostream	&operator << (std::ostream &ostream, const Animal &animal);

#endif

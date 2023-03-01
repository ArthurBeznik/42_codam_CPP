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

# include <Brain.hpp>

class Animal {

	protected:
		std::string _type;
        
    public:
		Animal();
        Animal(std::string const &type);
        Animal(const Animal &copy);
        virtual Animal &operator = (const Animal &animal);
        // ~Animal();
		virtual ~Animal();

		const std::string	&getType() const;
		virtual	Brain		*getBrain() const = 0;	// ? pure virtual function
		virtual void		makeSound() const;

};


#endif

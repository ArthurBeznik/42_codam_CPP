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

class AAnimal {

	protected:
		std::string _type;
        
    public:
        AAnimal(std::string const &type);
        AAnimal(const AAnimal &copy);
        virtual AAnimal &operator = (const AAnimal &animal) = 0;
		virtual ~AAnimal();

		const std::string	&getType() const;
		virtual	Brain		*getBrain() const = 0;
		virtual void		makeSound() const = 0;

};


#endif

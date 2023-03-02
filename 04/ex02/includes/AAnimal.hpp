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
		AAnimal();
        AAnimal(std::string const &type);
        AAnimal(const AAnimal &copy);
        virtual AAnimal &operator = (const AAnimal &animal);

		/**
		 * since there is a pure virtual function, it's necessary to define a 
		 * virtual destructor, even though it doesn't have any implementation.
		 * this allows derived classes to implement their own destructors and
		 * clean up resources properly.
		*/
		virtual ~AAnimal();

		const std::string	&getType() const;
		virtual	Brain		*getBrain() const;
		virtual void		makeSound() const = 0;

};


#endif

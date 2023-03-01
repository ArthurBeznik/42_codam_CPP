/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:52 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

# include <AAnimal.hpp>
# include <Brain.hpp>

class Dog : public AAnimal {

	private:
		Brain *_brain;

    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator = (const Dog &dog);
        AAnimal &operator = (const AAnimal &animal);
        virtual ~Dog();

		Brain	*getBrain() const;
		void	makeSound() const;

};

#endif

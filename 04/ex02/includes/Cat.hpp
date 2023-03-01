/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:52 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include <AAnimal.hpp>
# include <Brain.hpp>

class Cat : public AAnimal {

	private:
		Brain *_brain;
        
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator = (const Cat &cat);
        AAnimal &operator = (const AAnimal &animal);
        virtual ~Cat();

		Brain	*getBrain() const;
		void	makeSound() const;

};



#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 16:08:21 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal {

    public:
        WrongCat();
        WrongCat(const WrongCat&);
        WrongCat &operator = (const WrongCat &op);
        ~WrongCat();

		void	makeSound() const;

};

#endif

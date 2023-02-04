/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:27:55 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	private:
		Weapon 		*_weapon;
		std::string _name;

	public:
		HumanB(const std::string name);
		void		setName(const std::string name);
		std::string	getName(void);
		void		setWeapon(Weapon &weapon);
		Weapon		*getWeapon(void);
		void		attack(void);

};

#endif

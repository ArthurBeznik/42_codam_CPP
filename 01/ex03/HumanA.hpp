/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:27:55 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	private:
		Weapon 		&_weapon;
		std::string _name;

	public:
		HumanA(const std::string name, Weapon &weapon);
		void		setName(const std::string name);
		std::string	getName(void);
		void		setWeapon(Weapon &weapon);
		Weapon		getWeapon(void);
		void		attack(void);

};

#endif

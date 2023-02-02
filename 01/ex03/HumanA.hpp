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

#include <iostream>

#include "Weapon.hpp"

class HumanA {

	private:
		std::string _name;

	public:
		HumanA();
		std::string	getName(void);
		void		setName(const std::string name);
		Weapon		getWeapon(void);
		void		setWeapon(Weapon &weapon);
		void		attack(void);

};

#endif

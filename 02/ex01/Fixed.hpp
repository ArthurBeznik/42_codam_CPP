/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:27:55 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

    private:
        int					_fixedNumber;
		static const int	_fractionalBits = 8;
        
    public:
        Fixed(void);							// default constructor

		Fixed(const int value);
		Fixed(const float value);

        Fixed(const Fixed &fixed);				// copy constructor
        Fixed& operator = (const Fixed &fixed);	// copy assignment operator
        ~Fixed(void);							// destructor

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream &operator << (std::ostream &os, const Fixed &fixed);	// overload

#endif

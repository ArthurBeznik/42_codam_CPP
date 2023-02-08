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
        Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
        Fixed(const Fixed &fixed);

		/**
		 * Arithmetic operators
		*/
        Fixed	&operator = (const Fixed &fixed);
        Fixed	operator + (const Fixed &fixed);
        Fixed	operator - (const Fixed &fixed);
        Fixed	operator * (const Fixed &fixed);
        Fixed	operator / (const Fixed &fixed);

		/**
		 * Comparison operators
		*/
        bool	operator > (const Fixed &fixed) const;
        bool	operator < (const Fixed &fixed) const;
        bool	operator >= (const Fixed &fixed) const;
        bool	operator <= (const Fixed &fixed) const;
        bool	operator == (const Fixed &fixed) const;
        bool	operator != (const Fixed &fixed) const;
		
		/**
		 * Increment / decrement operators
		*/
        Fixed	operator ++ (int value);
		Fixed	&operator ++ ();
		Fixed	operator -- (int value);
		Fixed	&operator -- ();

		/**
		 * Public overloaded member functions
		*/
		static	Fixed		&min(Fixed &first, Fixed &second);
		static	Fixed const	&min(const Fixed &first, const Fixed &second);
		static	Fixed		&max(Fixed &first, Fixed &second);
		static	Fixed const	&max(const Fixed &first, const Fixed &second);

        ~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream& operator << (std::ostream &os, const Fixed &fixed);

#endif

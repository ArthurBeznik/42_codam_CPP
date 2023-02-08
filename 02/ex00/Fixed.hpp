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

class Fixed {

    private:
        int					_fixedNumber;
		static const int	_fractionalBits = 8;
        
    public:
        Fixed(void);							// default constructor
        Fixed(const Fixed &copy);				// copy constructor
        Fixed &operator = (const Fixed &fixed);	// copy assignment operator overload
        ~Fixed(void);							// destructor

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};



#endif

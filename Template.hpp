/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Template.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/08 11:14:52 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

class Template {

    private:
        
        
    public:
        Template();
        Template(const Template&);
        Template &operator = (const Template &op);
        ~Template();


};



#endif

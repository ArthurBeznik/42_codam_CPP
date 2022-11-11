/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Template.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/11 12:27:55 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

class Template;

class Template {

    private:
        
        
    public:
        Template();
        Template(const Template&);
        virtual ~Template();
        Template &operator=(const Template& op);


};



#endif

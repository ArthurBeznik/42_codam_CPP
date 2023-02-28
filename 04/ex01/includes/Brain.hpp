/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:57:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

    private:
        std::string _ideas[100];
        
    public:
        Brain();
        Brain(const Brain &copy);
        Brain &operator = (const Brain &brain);
        ~Brain();


};


#endif

#include <iostream>
#include <string>

// class Brain {
// public:
//     Brain() {
//         ideas_ = new std::string[100];
//         std::cout << "Brain created" << std::endl;
//     }
//     ~Brain() {
//         delete[] ideas_;
//         std::cout << "Brain destroyed" << std::endl;
//     }
// private:
//     std::string* ideas_;
// };

// class Dog {
// public:
//     Dog() {
//         brain_ = new Brain();
//         std::cout << "Dog created" << std::endl;
//     }
//     ~Dog() {
//         delete brain_;
//         std::cout << "Dog destroyed" << std::endl;
//     }
// private:
//     Brain* brain_;
// };

// class Cat {
// public:
//     Cat() {
//         brain_ = new Brain();
//         std::cout << "Cat created" << std::endl;
//     }
//     ~Cat() {
//         delete brain_;
//         std::cout << "Cat destroyed" << std::endl;
//     }
// private:
//     Brain* brain_;
// };

// int main() {
//     Dog d;
//     Cat c;
//     return 0;
// }

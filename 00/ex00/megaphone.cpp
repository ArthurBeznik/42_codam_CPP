/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 15:02:21 by abeznik       #+#    #+#                 */
/*   Updated: 2022/11/14 15:03:10 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array> // ? this comes from c++11 => should cause an error on compile

int	main(int argc, char **argv) {
	
	std::string emptyInput = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";

	if (argc > 1) {
		for (int x = 1; x < argc; ++x) {
			for (int y = 0; argv[x][y]; ++y) {
				std::cout << (char)std::toupper(argv[x][y]);
			}
		}
		std::cout << std::endl;
	} else {
		std::cout << emptyInput;
	}
	return (0);
}
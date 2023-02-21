/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 11:57:39 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 16:06:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int	main(void) {
	
	std::cout << "---------- Correct ----------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	dog->makeSound(); // will output the cat sound!
	cat->makeSound(); // will output the dog sound!
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "---------- Wrong ----------" << std::endl;
	const WrongAnimal* wrongMeta	= new WrongAnimal();
	const WrongAnimal* wrongCat		= new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();
	
	return (0);
}

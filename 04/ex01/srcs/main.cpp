/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 11:57:39 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 10:40:16 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>
#include <Brain.hpp>

#define NB_ANIMALS 8

void	moreTests(void) {

	Animal	*animals[NB_ANIMALS];
	Brain	*brain;

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i < NB_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[7]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Squirrel!!!!!";
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;

	std::cout << std::endl;

	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < NB_ANIMALS; i++)
		delete animals[i];

	std::cout << std::endl;
}

void	subjectTests(void) {

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j; //should not create a leak
	delete i;

	std::cout << std::endl;
}

int	main(void) {
	
	std::cout << "---------- Subject Tests ----------" << std::endl;
	subjectTests();

	// system("leaks ex01");

	std::cout << std::endl;

	std::cout << "---------- More Tests ----------" << std::endl;
	moreTests();

	// system("leaks ex01");

	std::cout << std::endl;

	// std::cout << "---------- Brain ----------" << std::endl;
	// testBrain();
	
	return (0);
}

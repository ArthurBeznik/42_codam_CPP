/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 11:57:39 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/02 10:22:55 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>
#include <Brain.hpp>

#define NB_ANIMALS 8

void	abstractTests(void) {

	/**
	 * this should not be possible
	*/
	// AAnimal *abstract = new AAnimal();
	// abstract->makeSound();

	std::cout << std::endl;
}

void	moreTests(void) {
	
	AAnimal	*animals[NB_ANIMALS];
	Brain	*brain;

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i % 2 == 0)
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

	animals[3]->makeSound();
	animals[6]->makeSound();
	std::cout << "Type: " << animals[2]->getType() << std::endl;

	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	for (int i = 0; i < NB_ANIMALS; i++)
		delete animals[i];

	std::cout << std::endl;
}

void	subjectTests(void) {

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	delete j; //should not create a leak
	delete i;

	std::cout << std::endl;
}

int	main(void) {
	
	std::cout << "---------- Subject Tests ----------" << std::endl;
	subjectTests();

	// system("leaks ex02");


	std::cout << "---------- More Tests ----------" << std::endl;
	moreTests();

	// system("leaks ex02");


	std::cout << "---------- Abstract Tests ----------" << std::endl;
	abstractTests();

	// system("leaks ex02");

	return (0);
}

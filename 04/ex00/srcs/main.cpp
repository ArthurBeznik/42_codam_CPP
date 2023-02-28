/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 11:57:39 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/28 12:38:34 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

void	moreWrongAnimals() {
	
	const WrongAnimal* wrongAnimals[] = { new WrongAnimal(), new WrongCat() };

	int i = 0;
	while (i < 2) {
		wrongAnimals[i]->makeSound();
		i++;
	}

	// system("leaks ex00");
	
	i = 0;
	while (i < 2) {
		delete wrongAnimals[i];
		i++;
	}

	// system("leaks ex00");
	
	std::cout << std::endl;
}

void	moreAnimals() {
	
	Animal* animals[] = { new Dog(), new Cat(), new Animal() };
	
	int i = 0;
	while (i < 3) {
		animals[i]->makeSound();
		i++;
	}

	// system("leaks ex00");
	
	i = 0;
	while (i < 3) {
		delete animals[i];
		i++;
	}

	// system("leaks ex00");

	std::cout << std::endl;
		
	const Animal* copyDog = new Dog();
	const Animal* testDog(copyDog);

	std::cout << copyDog->getType() << " " << std::endl;
	copyDog->makeSound();
	std::cout << testDog->getType() << " " << std::endl;
	testDog->makeSound();

	delete copyDog;

	std::cout << std::endl;
		
	const Animal* copyCat = new Cat();
	const Animal* testCat(copyCat);

	std::cout << copyCat->getType() << " " << std::endl;
	copyCat->makeSound();
	std::cout << testCat->getType() << " " << std::endl;
	testCat->makeSound();

	delete copyCat;

	std::cout << std::endl;
}

int	main(void) {
	
	std::cout << "---------- Correct ----------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	dog->makeSound(); // will output the dog sound!
	cat->makeSound(); // will output the cat sound!
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "---------- Wrong ----------" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();

	// system("leaks ex00");
	
	delete dog;
    delete cat;
    delete meta;
    delete wrongMeta;
    delete wrongCat;

	// system("leaks ex00");

	std::cout << std::endl;

	std::cout << "---------- More Animals ----------" << std::endl;
	moreAnimals();

	// system("leaks ex00");

	std::cout << "---------- More Wrong Animals ----------" << std::endl;
	moreWrongAnimals();

	// system("leaks ex00");
	
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 13:09:58 by user42            #+#    #+#             */
/*   Updated: 2021/09/15 15:54:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#define TAB_SIZE 4
#define IDEA_DOG "OUAF"
#define IDEA_CAT "MIAOU"

Animal	*cat_manip(Animal *siam)
{
	std::cout << "COPYING THE CAT" << std::endl;
	((Cat *)siam)->getBrain()->setIdeas(0, "Mew");
	std::cout << "Siam's idea n°0 (before deep copy): " << ((Cat *)siam)->getBrain()->getIdeas(0) << std::endl;
	//Deep copy
	Animal	*little_cat = new Cat(*(Cat *)siam);
	std::cout << "Siam copied into little_cat" << std::endl;
	std::cout << "Siam's idea n°0 (after deep copy): " << ((Cat *)siam)->getBrain()->getIdeas(0) << std::endl;
	std::cout << "Little_cat's idea n°0: " << ((Cat *)little_cat)->getBrain()->getIdeas(0) << std::endl;
	//Checking the deep copy
	std::cout << "Changing idea N°0 of copy" << std::endl;
	((Cat *)little_cat)->getBrain()->setIdeas(0, IDEA_CAT);
	std::cout << "Little_cat's idea n°0: " << ((Cat *)little_cat)->getBrain()->getIdeas(0) << std::endl;
	std::cout << "Siam's idea n°0 (after deep copy): " << ((Cat *)siam)->getBrain()->getIdeas(0) << std::endl;
	
	return (little_cat);
}

Animal	*dog_manip(Animal *pit)
{
	std::cout << "COPYING THE DOG" << std::endl;
	((Dog *)pit)->getBrain()->setIdeas(0, "Woof");
	std::cout << "Pit's idea n°0 (before deep copy): " << ((Dog *)pit)->getBrain()->getIdeas(0) << std::endl;
	//Deep copy
	Animal	*little_dog = new Dog(*(Dog*)pit);
	std::cout << "Pit copied into little_dog" << std::endl;
	std::cout << "Pit's idea n°0 (after deep copy): " << ((Dog *)pit)->getBrain()->getIdeas(0) << std::endl;
	std::cout << "Little_dog's idea n°0: " << ((Dog *)little_dog)->getBrain()->getIdeas(0) << std::endl;
	//Checking the deep copy
	std::cout << "Changing idea N°0 of copy" << std::endl;
	((Dog *)little_dog)->getBrain()->setIdeas(0, IDEA_DOG);
	std::cout << "Little_dog's idea n°0 (changed): " << ((Dog *)little_dog)->getBrain()->getIdeas(0) << std::endl;
	std::cout << "Pit's idea n°0 (after deep copy): " << ((Dog *)pit)->getBrain()->getIdeas(0) << std::endl;
	
	return (little_dog);
}

int	main(void)
{
	Animal *meta[TAB_SIZE];
	Animal *pit = new Dog();
	Animal *siam = new Cat();
	Animal	*copy1;
	Animal	*copy2;

	//ex02 special : uncomment the following line to check that Animal is not an instanciable class.
//	Animal *wrong = new Animal();

	// Building array of cats and dogs
	for (int i = 0; i < TAB_SIZE / 2; i++)
	{
		std::cout << i << ": " << std::endl;
		meta[i] = new Dog();
	}
	for (int i = TAB_SIZE / 2; i < TAB_SIZE; i++)
	{
		std::cout << i << ": " << std::endl;
		meta[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << "ARRAY BUILT" << std::endl;
	for (int i = 0; i < TAB_SIZE; i++)
		meta[i]->makeSound();
	
	// Deep copies
	std::cout << std::endl;
	std::cout << "DEEP COPIES" << std::endl;
	std::cout << std::endl;
	copy1 = dog_manip(pit);
	std::cout << std::endl;
	copy2 = cat_manip(siam);
	
	// Deleting the array
	std::cout << std::endl;
	std::cout << "DELETING THE ARRAY" << std::endl;
	for (int i = 0; i < TAB_SIZE; i++)
		delete meta[i];
	//Deleting pit and siam
	std::cout << std::endl;
	std::cout << "DELETING pit and siam" << std::endl;
	delete pit;
	delete siam;
	//Deleting the deep copies
	std::cout << std::endl;
	std::cout << "DELETING copies" << std::endl;
	delete copy1;
	delete copy2;
}

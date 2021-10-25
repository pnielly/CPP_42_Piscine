/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:23:07 by user42            #+#    #+#             */
/*   Updated: 2021/09/15 17:46:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{

	std::cout << "Basic test" << std::endl;
	std::cout << std::endl;	

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl;
	std::cout << "Character : Deep copy test" << std::endl;
	std::cout << std::endl;

	IMateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	AMateria* tmp0;
	tmp0 = source->createMateria("ice");

	Character* original = new Character("ORIGINAL");
	original->equip(tmp0);
	Character copy;
	copy = *original;	
	
	std::cout << "Original is unequipped" << std::endl;
	original->unequip(0);
	
	std::cout << "Original use :" << std::endl;
	original->use(0, copy);
	std::cout << "Copy use :" << std::endl;
	copy.use(0, *original);

	delete original;
	delete source;

	std::cout << std::endl;
	std::cout << "Character : Remaining tests" << std::endl;
	std::cout << std::endl;

	ICharacter*	noone = new Character();
	ICharacter*	two = new Character("two");
	
	IMateriaSource* s1 = new MateriaSource();
	s1->learnMateria(new Ice());
	s1->learnMateria(new Ice());
	s1->learnMateria(new Cure());
	s1->learnMateria(new Cure());
	std::cout << std::endl;
	std::cout << "should say the source is full" << std::endl;
	s1->learnMateria(new Ice()); // should say the source is full

	std::cout << std::endl;
	std::cout << "unequip inexistant materia : no message" << std::endl;
	noone->unequip(0); //should say can't unequip cause no materia
	std::cout << std::endl;

	AMateria* tmp1 = s1->createMateria("ice");
	noone->equip(tmp1);
	AMateria* tmp2 = s1->createMateria("ice");
	noone->equip(tmp2);
	AMateria* tmp3 = s1->createMateria("cure");
	noone->equip(tmp3);
	AMateria* tmp4 = s1->createMateria("cure");
	noone->equip(tmp4);
	AMateria* tmp5 = s1->createMateria("ice");
	std::cout << std::endl;
	std::cout << "should say can't equip cause no room anymore" << std::endl;
	noone->equip(tmp5); // should say can't equip cause no room anymore

	std::cout << std::endl;

	ICharacter*	three(noone);
	three->use(0, *noone);
	noone->use(1, *two);
	noone->use(2, *two);
	noone->use(3, *two);
	std::cout << std::endl;
	std::cout << "should say can't use cause wrong index" << std::endl;
	noone->use(4, *two); // should say can't use cause wrong index


	delete noone;
	delete two;
	delete tmp5;
	delete s1;

	return 0;
}

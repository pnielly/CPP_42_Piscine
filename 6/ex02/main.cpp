/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:54:27 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 12:34:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

# include <stdlib.h>
# include <iostream>
# include <time.h>
# include <exception>

// random class generation A, B or C
Base	*generate(void)
{
	char	tab[] = {'A', 'B', 'C'};

	srand(time(NULL));
	int i = rand() % 3;

	if (!i)
	{
		std::cout << "Class " << tab[i] << " has been generated." << std::endl;
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "Class " << tab[i] << " has been generated." << std::endl;
		return (new B);
	}
	std::cout << "Class " << tab[i] << " has been generated." << std::endl;
	return (new C);
}

// identify by pointer
void	identify_by_pointer(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A";
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B";
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C";
}

// identify by reference
void	identify_by_reference(Base& p)
{
	try {
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A";
	}
	catch (std::exception &bc) {}
	
	try {
		B& b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B";
	}
	catch (std::exception &bc) {}
	
	try {
		C& c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C";
	}
	catch (std::exception &bc) {}
}

// main
int	main(void)
{
	Base	*random = generate();

	std::cout << "Calling identify by pointer : ";
	identify_by_pointer(random);
	std::cout << std::endl;
	std::cout << "Calling identify by reference : ";
	identify_by_reference(*random);
	
	delete random;
}

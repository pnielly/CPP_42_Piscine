/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:13:20 by user42            #+#    #+#             */
/*   Updated: 2021/09/22 10:30:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//**********************************************************************************//
//		 		MAIN FROM MY BRAIN				    //
//**********************************************************************************//

#include "Array.hpp"

// ENV VAR
#define SIZE 10
#define MSG " -- b"
#define MSG2 " -- c"

// COLORS
#define YELLOW "\e[1;33m"
#define GREEN "\e[1;32m"
#define NC "\e[0m"

//Empty Array
void	emptyArray(void)
{
	std::cout << GREEN << "Empty Array test : " << NC << std::endl;
	
	Array<int> empty;

	std::cout << "Size of array : " << empty.getSize() << std::endl;

	try {
		std::cout << "Trying to access array[0]. Should display \"std::exception\"." << std::endl;
		empty[0] = 1;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

//Deep Copy with int
void	deepCopy(void)
{
	std::cout << GREEN << "Deep Copy test (with <INT>) : " << NC << std::endl;
	
	Array<int> a(SIZE);

	for (int i = 0; i < SIZE; i++)
		a[i] = i;
	
	Array<int> b = a;
	Array<int> c(b);

	std::cout << YELLOW << "Before modification of b and c" << NC << std::endl;

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "a[" << i << "] = " << a[i];
		std::cout << "; b[" << i << "] = " << b[i];
		std::cout << "; c[" << i << "] = " << c[i];
		std::cout << std::endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		b[i] = i + SIZE;
		c[i] = b[i] + SIZE;
	}

	std::cout << std::endl;	
	std::cout << YELLOW << "After modification of b and c" << NC << std::endl;

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "a[" << i << "] = " << a[i];
		std::cout << "; b[" << i << "] = " << b[i];
		std::cout << "; c[" << i << "] = " << c[i];
		std::cout << std::endl;
	}
}

// Deep Copy with std::string
void	stringArray(void)
{
	std::cout << GREEN << "Deep Copy test (with <STD::STRING>) : " << NC << std::endl;
	
	Array<std::string>	a(3);
	std::string		example[] = {"bonjour", "au revoir", "merci"};
	
	for (int i = 0; i < 3; i++)
		a[i] = example[i];
	
	std::cout << "Size of array : " << a.getSize() << std::endl;
	
	Array<std::string> b = a;
	Array<std::string> c(b);
	
	std::cout << YELLOW << "Before modification of b and c" << NC << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "a[" << i << "] = " << a[i];
		std::cout << "; b[" << i << "] = " << b[i];
		std::cout << "; c[" << i << "] = " << c[i];
		std::cout << std::endl;
	}

	for (int i = 0; i < 3; i++)
	{
		b[i] = b[i] + MSG;
		c[i] = c[i] + MSG2;
	}

	std::cout << std::endl;	
	std::cout << YELLOW << "After modification of b and c" << NC << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "a[" << i << "] = " << a[i];
		std::cout << "; b[" << i << "] = " << b[i];
		std::cout << "; c[" << i << "] = " << c[i];
		std::cout << std::endl;
	}
}

//Checks that newly created Array's elements are initialized
void	init_check()
{
	std::cout << GREEN << "Init test (with <INT>) : " << NC << std::endl;
	// Example from subject
	std::cout << "Example from subject" << std::endl;
	int * a = new int();
	std::cout << *a;

	delete a;
	
	std::cout << std::endl;
	
	// My initialized Array
	std::cout << "My initialized array" << std::endl;
	Array<int> b(1);
	std::cout << b[0];	
}

//**********************************************************************************//
//		 		MAIN FROM THE SUBJECT				    //
//**********************************************************************************//

#define MAX_VAL 750

int subject_main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
	const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
	if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// MAIN
int	main(void)
{
	std::cout << GREEN << "********* CALLING MY OWN MAIN ***********" << NC << std::endl;
	std::cout << std::endl;
	emptyArray();
	std::cout << std::endl;
	deepCopy();
	std::cout << std::endl;
	stringArray();
	std::cout << std::endl;
	init_check();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "********* CALLING MAIN FROM THE SUBJECT **" << NC << std::endl;
	subject_main();
}


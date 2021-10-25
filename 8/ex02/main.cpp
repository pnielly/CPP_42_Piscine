/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:53:10 by user42            #+#    #+#             */
/*   Updated: 2021/09/24 10:17:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

// COLORS
# define YELLOW "\e[1;33m"
# define GREEN "\e[1;32m"
# define NC "\e[0m"

void	list_test(void)
{
	print("");
	print(GREEN);
	print("TESTING LIST");
	print(NC);

	std::list<int>	li;

	print("Adding element : 5");
	li.push_back(5);
	print("Adding element : 17");
	li.push_back(17);

	std::cout << "Top : " << li.back() << std::endl;

	print("Pop");
	li.pop_back();

	std::cout << "Size : " << li.size() << std::endl;

	print("Adding element : 3");
	li.push_back(3);
	print("Adding element : 5");
	li.push_back(5);
	print("Adding element : 737");
	li.push_back(737);
	print("Adding element : 0");
	li.push_back(0);
	
	print(GREEN);
	print("Forward Iteration (from bottom to back)");
	print(NC);

	std::list<int>::iterator it = li.begin();
	std::list<int>::iterator ite = li.end();

	while (it != ite)
	{
		print(*it);
		++it;
	}
	
	print(GREEN);
	print("Backwards Iteration (from top to bottom)");
	print(NC);

	std::list<int>::reverse_iterator rit = li.rbegin();
	std::list<int>::reverse_iterator rite = li.rend();

	while (rit != rite)
	{
		print(*rit);
		++rit;
	}
}

void	iterations(void)
{
	print(GREEN);
	print("TESTING MUTANTSTACK");
	print(NC);

	MutantStack<int>	mstack;

	print("Adding element : 5");
	mstack.push(5);
	print("Adding element : 17");
	mstack.push(17);

	std::cout << "Top : " << mstack.top() << std::endl;

	print("Pop");
	mstack.pop();

	std::cout << "Size : " << mstack.size() << std::endl;

	print("Adding element : 3");
	mstack.push(3);
	print("Adding element : 5");
	mstack.push(5);
	print("Adding element : 737");
	mstack.push(737);
	print("Adding element : 0");
	mstack.push(0);
	
	print(GREEN);
	print("Forward Iteration (from bottom to top)");
	print(NC);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite)
	{
		print(*it);
		++it;
	}
	
	print(GREEN);
	print("Backwards Iteration (from top to bottom)");
	print(NC);

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	while (rit != rite)
	{
		print(*rit);
		++rit;
	}
}

int	main(void)
{
	iterations();
	list_test();
	return 0;
}

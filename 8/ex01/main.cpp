/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:43:34 by user42            #+#    #+#             */
/*   Updated: 2021/09/21 14:03:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// COLORS
#define YELLOW "\e[1;33m"
#define GREEN "\e[1;32m"
#define NC "\e[0m"

void	print_test(std::string str)
{
	std::cout << std::endl << std::endl;
	std::cout << GREEN << str << NC << std::endl;
	std::cout << std::endl;
}

void	max_size_reached(void)
{
	Span	sp = Span(4);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
}

void	short_array(void)
{
	Span	sp = Span(1);

	sp.addNumber(5);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	empty_array(void)
{
	Span	sp = Span(0);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int	subject_main(void)
{
	Span	sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}

void	ten_k_test()
{
	Span	sp = Span(10000);
	try {
		// fills randomly sp from 0th to 9999th elements.
		sp.addNumber(0, 9999);
	
//		sp.display();
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (Span::MaxSizeReachedException& msr)
	{
		std::cout << msr.what() << std::endl;
	}
	catch (Span::TooSmallException& ts)
	{
		std::cout << ts.what() << std::endl;
	}
	catch (Span::ForbiddenAccessException& fa)
	{
		std::cout << fa.what() << std::endl;
	}
	catch (Span::IllogicalParamException& ip)
	{
		std::cout << ip.what() << std::endl;
	}
}

int	main(void)
{
	print_test("SUBJECT QUICK TEST");
	subject_main();
	print_test("EMPTY ARRAY TEST");
	empty_array();
	print_test("SHORT ARRAY TEST");
	short_array();
	print_test("MAX SIZE REACHED TEST");
	max_size_reached();
	print_test("10000 TEST");
	ten_k_test();
}

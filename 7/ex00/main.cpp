/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:41:44 by user42            #+#    #+#             */
/*   Updated: 2021/09/22 10:33:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

int	main(void)
{
	float	a = 42.3;
	float 	b = 0;

	std::cout << "Before swap : a = " << a << " and b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap : a = " << a << " and b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << "		max of a and b is now : " << max(a, b) << std::endl;
	std::cout << "		min of a and b is now : " << min(a, b) << std::endl;

	std::cout << "What if a == b ?" << std::endl;
	a = b;
	std::cout << "		address of a is : " << &a << std::endl;
	std::cout << "		address of b is : " << &b << std::endl;
	std::cout << "		max of a and b is now : " << &max(a, b) << std::endl;
	std::cout << "		min of a and b is now : " << &min(a, b) << std::endl;

	std::cout << std::endl;
	std::cout << "End of test" << std::endl;
}

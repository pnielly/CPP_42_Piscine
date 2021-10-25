/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:55:09 by user42            #+#    #+#             */
/*   Updated: 2021/07/28 16:47:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	karen.complain("debug");
	std::cout << std::endl;
	karen.complain("info");
	std::cout << std::endl;
	karen.complain("warning");
	std::cout << std::endl;
	karen.complain("error");
}

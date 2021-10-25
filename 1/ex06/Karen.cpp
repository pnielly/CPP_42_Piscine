/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:53:07 by user42            #+#    #+#             */
/*   Updated: 2021/07/31 11:36:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug()
{
	std::cout << "[DEBUG]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon cost more money." << std::endl << "You don’t put enough!" << std::endl << "If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

typedef void(Karen::* lev) (void);

void	Karen::complain(std::string level)
{
	std::string const message[4] = {"debug", "info", "warning", "error"};
	lev	cmd[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == message[i])
			(this->*cmd[i])();
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:53:07 by user42            #+#    #+#             */
/*   Updated: 2021/07/28 16:44:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug()
{
	std::cout << "\"DEBUG\" level: Messages in this level contain extensive contextual information. They are mostly used for problem diagnosis. Example: \"I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\"" << std::endl;
}

void	Karen::info()
{
	std::cout << "\"INFO\" level: These messages contain some contextual information to help trace execution in a production environment. Example: \"I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!\"" << std::endl;
}

void	Karen::warning()
{
	std::cout << "\"WARNING\" level: A warning message indicates a potential problem in the system. The system is able to handle the problem by itself or to proceed with this problemanyway. Example: \"I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month.\"" << std::endl;
}

void	Karen::error()
{
	std::cout << "\"ERROR\" level: An error message indicates a serious problem in the system. The problem is usually non-recoverable and requires manual intervention.  Example:\"This is unacceptable, I want to speak to the manager now.\"" << std::endl;
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

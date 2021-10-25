/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:24:15 by user42            #+#    #+#             */
/*   Updated: 2021/07/31 11:17:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/replace.hpp"

int	replace(const char *filename, const char *s1, const char *s2)
{
	std::ifstream	src(filename);
	std::ofstream	dest(std::string(filename) + ".replace");
	std::string	str_find(s1);
	std::string	str_replace(s2);
	std::string	str_all;
	size_t		find_pos;
	std::ostringstream	text;

	text << src.rdbuf();
	str_all = text.str();
	while (1)
	{
		find_pos = str_all.find(str_find);
		if (find_pos == std::string::npos)
			break ;
		str_all.replace(find_pos, str_find.length(), str_replace);
	}
	dest << str_all;
	
	return (SUCCESS);
}

int	main(int ac, char **av)
{
	struct stat buf;
	
	if (ac != 4)
		return (ft_error(INVALID_ARGS_COUNT));
	else if (!av[2][0] || !av[3][0])
		return (ft_error(EMPTY_STRING));
	else if (stat((const char *)av[1], &buf) != 0)
		return (ft_error(NO_FILE));
	else
		replace((const char *)av[1], (const char *)av[2], (const char *)av[3]);
	return (SUCCESS);
}

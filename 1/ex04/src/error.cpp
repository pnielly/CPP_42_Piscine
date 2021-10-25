/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:17:31 by user42            #+#    #+#             */
/*   Updated: 2021/07/31 11:16:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/replace.hpp"

int	ft_error(int err_num)
{
	std::string error_list[] = {
		"No error.",
		"Empty argument(s) !",
		"Invalid number of arguments. 3 needed.",
		"File doesn't exists."
		};
	std::cout << "Error: " << error_list[err_num] << std::endl;
	return (err_num);
}

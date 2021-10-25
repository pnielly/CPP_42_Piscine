/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:00:05 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 11:26:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_HPP__
# define __DATA_HPP__

# include <iostream>
# include <stdint.h>

struct Data
{
	std::string	str;
	int		i;
	char		c;
};

Data		*init_struct();
uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif

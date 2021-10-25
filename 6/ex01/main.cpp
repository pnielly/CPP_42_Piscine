/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:17:19 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 11:28:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		*tmp = init_struct();
	uintptr_t	ser = serialize(tmp);
	Data		*tmp2 = deserialize(ser);

	std::cout << "original address =     <" << tmp << ">" << std::endl;
	std::cout << "serialized address =   <" << ser << ">" << std::endl;
	std::cout << "deserialized address = <" << tmp2 << ">" << std::endl;

	delete tmp;
}

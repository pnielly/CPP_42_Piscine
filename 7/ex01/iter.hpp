/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:31:40 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 16:03:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>

template <typename T>
void	iter(T *array, size_t size, void (*f)(T const & elem))
{
	for (size_t i = 0; i < size; i++)
		(*f)(array[i]);
}

/** Tried to make a template of tablen to find any array's length, but couldn't make it work... **/
/**
template <typename T>
size_t	tablen(T const *tab)
{
	if (!tab)
		return 0;

	size_t	i = sizeof(tab)/sizeof(*tab);

	return i;
}
**/

template <typename T>
void	print(T const & elem)
{
	std::cout << elem << std::endl;
}

#endif

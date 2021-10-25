/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:37:18 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 14:49:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

# include <iostream>

template < typename T >
void		swap( T& a, T& b)
{
	T tmp = a;

	a = b;
	b = tmp;
}


template < typename T >
T const &	min( T const & a, T const & b)
{
	if (a < b)
		return a;
	return b;
}

template < typename T >
T const &	max( T const & a, T const & b)
{
	if (a > b)
		return a;
	return b;
}

#endif

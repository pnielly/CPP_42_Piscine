/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:58:24 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 12:29:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

// Default Constructor
C::C() {}

// Destructor
C::~C() {}

// Copy
C::C(const C& src)
{
	*this = src;
}

// Assignment operator overload
C& C::operator=(const C& rhs)
{
	(void)rhs;
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:57:10 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 12:29:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

// Default Constructor
A::A() {}

// Destructor
A::~A() {}

// Copy
A::A(const A& src)
{
	*this = src;
}

// Assignment operator overload
A& A::operator=(const A& rhs)
{
	(void)rhs;
	return (*this);
}

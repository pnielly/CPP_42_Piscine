/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:57:57 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 12:29:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

// Default Constructor
B::B() {}

// Destructor
B::~B() {}

// Copy
B::B(const B& src)
{
	*this = src;
}

// Assignment operator overload
B& B::operator=(const B& rhs)
{
	(void)rhs;
	return (*this);
}

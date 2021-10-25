/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:35:55 by user42            #+#    #+#             */
/*   Updated: 2021/08/05 13:57:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int			_value;
	const static int	_fractional_bits = 8;

public:
	Fixed();				// Default constructor
	virtual ~Fixed();				// Destructor
	Fixed(const Fixed& copy);		// Copy constructor
	Fixed &operator=(const Fixed& op);	// Operateur d'assignation

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif

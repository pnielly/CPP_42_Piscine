/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:35:55 by user42            #+#    #+#             */
/*   Updated: 2021/08/09 20:27:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

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

	// Rajout de surcharge d'opérateur d'assignation : ex02
	Fixed operator+(const Fixed& op) const;
	Fixed operator-(const Fixed& op) const;
	Fixed operator*(const Fixed& op) const;
	Fixed operator/(const Fixed& op) const;
	Fixed & operator++(void);	//pre increment;
	Fixed operator++(int);		//post increment;
	Fixed & operator--(void);	//pre decrement;
	Fixed operator--(int);		//post decrement;
	
	bool operator>(const Fixed& op) const;
	bool operator<(const Fixed& op) const;
	bool operator>=(const Fixed& op) const;
	bool operator<=(const Fixed& op) const;
	bool operator==(const Fixed& op) const;
	bool operator!=(const Fixed& op) const;

	static Fixed &min(Fixed &a, Fixed &b);
	const static Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	const static Fixed &max(const Fixed &a, const Fixed &b);

	//Rajout pour l'ex01:
	Fixed(const int integer);		// convertit en sa valeur fixe (8 bits)
	Fixed(const float floater);		// idem

	int	toInt(void) const;		// Converts fixed point value into int
	float	toFloat(void) const;		// Converts fixed point value into float

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

// Surcharge de "<<" qui insère représentation float du nombre
std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif


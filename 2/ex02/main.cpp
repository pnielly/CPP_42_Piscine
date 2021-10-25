/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:23:33 by user42            #+#    #+#             */
/*   Updated: 2021/08/05 17:25:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    if (c > b)
        std::cout << c << " is superior to " << b << std::endl << "c is superior to b" << std::endl;
    if (b < c)
        std::cout << b << " is inferior to " << c << std::endl << "b is inferior to c" << std::endl;
    if (b >= d)
        std::cout << b << " is sup or equal to " << d << std::endl << "b is sup or equal to d" << std::endl;
    if (c <= a)
        std::cout << c << " is infe or equal to " << a << std::endl << "a is infe or equal to c" << std::endl;
    if (b == d)
        std::cout << b << " is equal to " << d << std::endl << "b is equal to d" << std::endl;
    if (a != c)
        std::cout << a << " is different to " << c << std::endl << "a is equal to c" << std::endl;

    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "c - b = " << c - b << std::endl;
    std::cout << "b * b = " << b * b << std::endl;
    std::cout << "b / b = " << b / b << std::endl;

    Fixed e;
    Fixed const f(Fixed(5.05f) * Fixed(2));
    std::cout << e << std::endl;
    std::cout << ++e << std::endl;
    std::cout << e << std::endl;
    std::cout << e++ << std::endl;
    std::cout << e << std::endl;

    std::cout << f << std::endl;
    std::cout << Fixed::max(e, f) << std::endl;

    Fixed h(48.6874f);
    Fixed j(Fixed(8.14f) * Fixed(2));
    std::cout << h << std::endl;
    std::cout << ++h << std::endl;
    std::cout << h << std::endl;
    std::cout << h++ << std::endl;
    std::cout << h << std::endl;

    std::cout << j << std::endl;
    std::cout << Fixed::max(h, j) << std::endl;
    
}

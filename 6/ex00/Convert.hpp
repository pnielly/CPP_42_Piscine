/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:25:31 by user42            #+#    #+#             */
/*   Updated: 2021/09/16 22:09:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
# define __CONVERT_HPP__

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <stdint.h>
# include <exception>
# include <string>
 
class Convert
{
	public:
		//Canonic Class
		Convert();
		Convert(std::string const & str);
		virtual	~Convert();
		Convert(const Convert& src);
		Convert &operator=(const Convert& rhs);

		// cast operators
		operator char();
		operator int();
		operator float();
		operator double();

		std::string const &	getStr() const;

		void	display();

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();

		class CantPrintException: public std::exception 
		{
			public:
				virtual char const * what() const throw();
		};

		class CantConvertException: public std::exception
		{
			public:
				virtual char const * what() const throw();
		};

	protected:
	private:
		std::string	_str;
};
#endif


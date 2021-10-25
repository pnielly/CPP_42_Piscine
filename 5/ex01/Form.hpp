/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:30:18 by user42            #+#    #+#             */
/*   Updated: 2021/09/16 15:02:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string const name, bool is_signed, int const canSign, int const canExe);
		virtual	~Form();
		Form(const Form& src);
		Form &operator=(const Form& rhs);

		std::string const &	getName() const;
		int const &		getSignGrade() const;
		int const &		getExeGrade() const;
		bool const &		getState() const;

		void			beSigned(Bureaucrat const & b);
	protected:
	private:
		std::string const	_name;
		bool		_signed;
		int const		_canSign;
		int const		_canExe;
};

std::ostream	&operator<<(std::ostream & out, Form const & f);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:30:18 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 00:19:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_HPP__
# define __AFORM_HPP__

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string const name, bool is_signed, int const canSign, int const canExe);
		virtual	~AForm();
		AForm(const AForm& src);
		AForm &operator=(const AForm& rhs);

		std::string const &	getName() const;
		int const &		getSignGrade() const;
		int const &		getExeGrade() const;
		bool const &		getState() const;
		std::string const &	getTarget() const;

		void			setName(std::string const & name);
		void			setSignGrade(int grade);
		void			setExeGrade(int grade);
		void			setState(bool state);
		void			setTarget(std::string const & target);

		void			beSigned(Bureaucrat const & b);

		virtual void			execute(Bureaucrat const & executor) const = 0;

		class FormNotSignedException: public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
	protected:
	private:
		std::string	_name;
		bool		_signed;
		int		_canSign;
		int		_canExe;
		std::string	_target;
};

std::ostream	&operator<<(std::ostream & out, AForm const & f);

#endif

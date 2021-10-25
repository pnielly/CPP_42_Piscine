/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:22:44 by user42            #+#    #+#             */
/*   Updated: 2021/09/16 13:04:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

#include <iostream>
 
class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int const grade);
		virtual	~Bureaucrat();
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat &operator=(const Bureaucrat& rhs);

	//getters
	std::string const &	getName() const;
	int const &		getGrade() const;

	//inc and dec
	void		incGrade(); //promote
	void		decGrade(); //retrograde

	//exceptions
	class GradeTooHighException: public std::exception
	{
		public:
			virtual char const	*what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual char const	*what() const throw();
	};
	protected:
	private:
		std::string const	_name;
		int		_grade;
};

std::ostream &operator<<(std::ostream & out, Bureaucrat const & b);

#endif


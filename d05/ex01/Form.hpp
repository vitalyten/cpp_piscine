/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:20:30 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 19:38:30 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const&);
		~GradeTooHighException(void) throw();
		GradeTooHighException& operator=(GradeTooHighException const&);
		char const* what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const&);
		~GradeTooLowException(void) throw();
		GradeTooLowException& operator=(GradeTooLowException const&);
		char const* what(void) const throw();
	};

	Form(std::string, int, int);
	Form(Form const&);
	~Form(void);
	Form& operator=(Form const&);

	std::string const& getName(void) const;
	bool isSigned(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;

	void beSigned(Bureaucrat const&);

private:
	std::string const	_name;
	bool				_is_signed;
	int const			_sign_grade;
	int const			_exec_grade;

	Form(void);
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif

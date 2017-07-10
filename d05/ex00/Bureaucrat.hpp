/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 15:01:58 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 15:35:05 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat {
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

	Bureaucrat(std::string, int);
	Bureaucrat(Bureaucrat const&);
	~Bureaucrat(void);
	Bureaucrat& operator=(Bureaucrat const&);

	std::string const& getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);

private:
	std::string const	_name;
	int					_grade;

	Bureaucrat(void);
};

std::ostream& operator<<(std::ostream&, Bureaucrat const&);

#endif

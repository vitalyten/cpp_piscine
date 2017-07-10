/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 15:02:06 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 16:16:50 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1) throw Bureaucrat::GradeTooHighException();
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& that) : _name(that._name) {*this = that;}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& that) {
	this->_grade = that._grade;
	return *this;
}

std::string const& Bureaucrat::getName(void) const {return this->_name;}

int Bureaucrat::getGrade(void) const {return this->_grade;}

void Bureaucrat::incrementGrade(void) {
	if (this->_grade == 1) throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}

void Bureaucrat::decrementGrade(void) {
	if (this->_grade == 150) throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}

Bureaucrat::Bureaucrat(void) {}

std::ostream& operator<<(std::ostream& o, Bureaucrat const& that) {
	o << that.getName() << ", bureaucrat grade " << that.getGrade() << std::endl;
	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const& that) {*this = that;}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const& that) {
	(void)that;
	return *this;
}

char const* Bureaucrat::GradeTooHighException::what(void) const throw() {return "grade too high";}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const& that) {*this = that;}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const& that) {
	(void)that;
	return *this;
}

char const* Bureaucrat::GradeTooLowException::what(void) const throw() {return "grade too low";}

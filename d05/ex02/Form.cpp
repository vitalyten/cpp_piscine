/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:20:23 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 22:55:42 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int exec_grade)
: _name(name), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade) {
	if (sign_grade < 1 || exec_grade < 1) throw Form::GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150) throw Form::GradeTooLowException();
}

Form::Form(Form const& that)
: _name(that._name), _is_signed(false), _sign_grade(that._sign_grade), _exec_grade(that._exec_grade)  {*this = that;}

Form::~Form(void) {}

Form& Form::operator=(Form const& that) {
	(void)that;
	return *this;
}

std::string const& Form::getName(void) const {return this->_name;}

bool Form::isSigned(void) const {return this->_is_signed;}

int Form::getSignGrade(void) const {return this->_sign_grade;}

int Form::getExecGrade(void) const {return this->_exec_grade;}

void Form::beSigned(Bureaucrat const& that) {
	if (that.getGrade() > this->_sign_grade) {
		throw Form::GradeTooLowException();
		return;
	}
	this->_is_signed = true;
}

void Form::execute(Bureaucrat const& that) const {
	if (!this->_is_signed) {
		throw Form::FormNotSigned();
		return;
	}
	if (that.getGrade() > this->_exec_grade) {
		throw Form::GradeTooLowException();
		return;
	}
	this->executeAction();
}

Form::Form(void) : _name(""), _is_signed(false), _sign_grade(150), _exec_grade(150) {}

std::ostream& operator<<(std::ostream& o, Form const& that) {
	o << that.getName();
	if (!that.isSigned()) o << " not";
	o << " signed, sign grade: " << that.getSignGrade()
	<< ", execute grade: " << that.getExecGrade() << std::endl;
	return o;
}


Form::GradeTooHighException::GradeTooHighException(void) {}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const& that) {*this = that;}
Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(Form::GradeTooHighException const& that) {
	(void)that;
	return *this;
}
char const* Form::GradeTooHighException::what(void) const throw() {return "grade too high";}


Form::GradeTooLowException::GradeTooLowException(void) {}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const& that) {*this = that;}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(Form::GradeTooLowException const& that) {
	(void)that;
	return *this;
}
char const* Form::GradeTooLowException::what(void) const throw() {return "grade too low";}


Form::FormNotSigned::FormNotSigned(void) {}
Form::FormNotSigned::FormNotSigned(Form::FormNotSigned const& that) {*this = that;}
Form::FormNotSigned::~FormNotSigned(void) throw() {}
Form::FormNotSigned& Form::FormNotSigned::operator=(Form::FormNotSigned const& that) {
	(void)that;
	return *this;
}
char const* Form::FormNotSigned::what(void) const throw() {return "form not signed";}

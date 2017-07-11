/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:15:40 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 23:45:13 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(void) {}

Intern::Intern(Intern const& that) {*this = that;}

Intern::~Intern(void) {}

Intern& Intern::operator=(Intern const& that) {
	(void)that;
	return *this;
}

Form* Intern::makeShrubberyCreationForm(std::string target) const {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyRequestForm(std::string target) const {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialPardonForm(std::string target) const {
	return new PresidentialPardonForm(target);
}


Form* Intern::makeForm(std::string form_name, std::string target) const {
	fp forms[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	std::string form_names[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++) {
		if (form_name == form_names[i]) {
			std::cout << "Intern creates " << form_name << std::endl;
			return (this->*(forms[i]))(target);
		}
	}
	std::cout << "Intern cannot create " << form_name << std::endl;
	return NULL;
}

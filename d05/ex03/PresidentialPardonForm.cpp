/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:49:44 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 23:11:05 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& that)
: Form("Presidential Pardon Form", 25, 5) {*this = that;}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& that) {
	this->Form::operator=(that);
	this->_target = that._target;
	return *this;
}

std::string const& PresidentialPardonForm::getTarget(void) const {return this->_target;}

void PresidentialPardonForm::executeAction(void) const {
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(void)
: Form("Robotomy Request", 25, 5), _target("") {}

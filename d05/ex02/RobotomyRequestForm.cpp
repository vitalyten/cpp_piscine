/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:49:29 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 22:48:48 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("Robotomy Request Form", 75, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& that)
: Form("Robotomy Request Form", 75, 45) {*this = that;}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& that) {
	this->Form::operator=(that);
	this->_target = that._target;
	return *this;
}

std::string const& RobotomyRequestForm::getTarget(void) const {return this->_target;}

void RobotomyRequestForm::executeAction(void) const {
	srand(time(NULL));
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << "'s robotomy failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(void)
: Form("Robotomy Request", 75, 45), _target("") {}

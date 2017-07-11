/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:49:11 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 22:49:00 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& that)
: Form("Shrubbery Creation Form", 145, 137) {*this = that;}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& that) {
	this->Form::operator=(that);
	this->_target = that._target;
	return *this;
}

std::string const& ShrubberyCreationForm::getTarget(void) const {return this->_target;}

void ShrubberyCreationForm::executeAction(void) const {
	std::ofstream outfile(this->_target + "_shrubbery");
	outfile << "                     .o00o" << std::endl;
	outfile << "                   o000000oo" << std::endl;
	outfile << "                  00000000000o" << std::endl;
	outfile << "                 00000000000000" << std::endl;
	outfile << "              oooooo  00000000  o88o" << std::endl;
	outfile << "           ooOOOOOOOoo  ```''  888888" << std::endl;
	outfile << "         OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl;
	outfile << "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'" << std::endl;
	outfile << "        OOOOOOOOOO'.QQQQQQQQQQ/ /q" << std::endl;
	outfile << "         OOOOOOOOO QQQQQQQQQQ/ /QQ" << std::endl;
	outfile << "           OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl;
	outfile << "             OO:F_P:O `QQQ/  /Q'" << std::endl;
	outfile << "                \\. \\ |  // |" << std::endl;
	outfile << "                d\\ \\\\|_////" << std::endl;
	outfile << "                qP| \\ _' `|Ob" << std::endl;
	outfile << "                   \\  / \\  \\Op" << std::endl;
	outfile << "                   |  | O| |" << std::endl;
	outfile << "           _       /\\. \\_/ /" << std::endl;
	outfile << "            `---__/|_\\   / /|  __" << std::endl;
	outfile << "                  `-'  `-'`-'-'" << std::endl;
	outfile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
: Form("Shrubbery Creation", 145, 137), _target("") {}

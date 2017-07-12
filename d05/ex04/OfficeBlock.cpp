/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:06:00 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/11 19:05:00 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::InternNotSet::InternNotSet(void) {}
OfficeBlock::InternNotSet::InternNotSet(InternNotSet const& that) {*this = that;}
OfficeBlock::InternNotSet::~InternNotSet(void) throw() {}
OfficeBlock::InternNotSet& OfficeBlock::InternNotSet::operator=(InternNotSet const& that) {(void)that; return *this;}
char const* OfficeBlock::InternNotSet::what(void) const throw() {return "intern not set";}

OfficeBlock::SignerNotSet::SignerNotSet(void) {}
OfficeBlock::SignerNotSet::SignerNotSet(SignerNotSet const& that) {*this = that;}
OfficeBlock::SignerNotSet::~SignerNotSet(void) throw() {}
OfficeBlock::SignerNotSet& OfficeBlock::SignerNotSet::operator=(SignerNotSet const& that) {(void)that; return *this;}
char const* OfficeBlock::SignerNotSet::what(void) const throw() {return "signer not set";}

OfficeBlock::ExecutorNotSet::ExecutorNotSet(void) {}
OfficeBlock::ExecutorNotSet::ExecutorNotSet(ExecutorNotSet const& that) {*this = that;}
OfficeBlock::ExecutorNotSet::~ExecutorNotSet(void) throw() {}
OfficeBlock::ExecutorNotSet& OfficeBlock::ExecutorNotSet::operator=(ExecutorNotSet const& that) {(void)that; return *this;}
char const* OfficeBlock::ExecutorNotSet::what(void) const throw() {return "executor not set";}

OfficeBlock::NoSuchForm::NoSuchForm(void) {}
OfficeBlock::NoSuchForm::NoSuchForm(NoSuchForm const& that) {*this = that;}
OfficeBlock::NoSuchForm::~NoSuchForm(void) throw() {}
OfficeBlock::NoSuchForm& OfficeBlock::NoSuchForm::operator=(NoSuchForm const& that) {(void)that; return *this;}
char const* OfficeBlock::NoSuchForm::what(void) const throw() {return "form does not exist";}

OfficeBlock::OfficeBlock(void) : _intern(NULL), _signer(NULL), _executor(NULL) {}
OfficeBlock::OfficeBlock(Intern* intern, Bureaucrat* signer, Bureaucrat* executor)
: _intern(intern), _signer(signer), _executor(executor) {}
OfficeBlock::~OfficeBlock(void) {}
OfficeBlock::OfficeBlock(OfficeBlock const& that) {*this = that;}
OfficeBlock& OfficeBlock::operator=(OfficeBlock const& that) {(void)that; return *this;}

void OfficeBlock::setIntern(Intern* intern) {this->_intern = intern;}
void OfficeBlock::setSigner(Bureaucrat* signer) {this->_signer = signer;}
void OfficeBlock::setExecutor(Bureaucrat* executor) {this->_executor = executor;}

void OfficeBlock::doBureaucracy(std::string form_name, std::string target) {
	if (!this->_intern) {throw OfficeBlock::InternNotSet(); return;}
	if (!this->_signer) {throw OfficeBlock::SignerNotSet(); return;}
	if (!this->_executor) {throw OfficeBlock::ExecutorNotSet(); return;}
	Form *form = this->_intern->makeForm(form_name, target);
	if (!form) {throw OfficeBlock::NoSuchForm(); return;}
	try {this->_signer->signForm(*form);}
	catch(std::exception& e) {delete form;throw e;return;}
	try {this->_executor->executeForm(*form);}
	catch(std::exception& e) {throw e;}
	delete form;
}


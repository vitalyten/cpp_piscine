/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:34:43 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/11 21:23:43 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::ImpossibleException::ImpossibleException(void) {}
Converter::ImpossibleException::ImpossibleException(ImpossibleException const& that) {(void)that;}
Converter::ImpossibleException::~ImpossibleException(void) throw() {}
Converter::ImpossibleException& Converter::ImpossibleException::operator=(Converter::ImpossibleException const& that)
{(void)that; return *this;}
char const* Converter::ImpossibleException::what(void) const throw() {return "impossible";}

Converter::NonDisplayableException::NonDisplayableException(void) {}
Converter::NonDisplayableException::NonDisplayableException(NonDisplayableException const& that) {(void)that;}
Converter::NonDisplayableException::~NonDisplayableException(void) throw() {}
Converter::NonDisplayableException& Converter::NonDisplayableException::operator=(Converter::NonDisplayableException const& that)
{(void)that; return *this;}
char const* Converter::NonDisplayableException::what(void) const throw() {return "Non displayable";}

Converter::Converter(char* input) : _input(input) {}
Converter::~Converter(void) {}

Converter::operator char(void) {
	int i;
	char c;
	try {i = *this; c = static_cast<char>(i);}
	catch(std::exception& e) {throw Converter::ImpossibleException();}
	if (std::isprint(c)) return c;
	throw Converter::NonDisplayableException();
}

Converter::operator int(void) {
	try {
		return std::stoi(this->_input);
	} catch(std::exception& e) {
		if (this->_input.length() == 1 && std::isprint(this->_input[0]))
			return static_cast<int>(this->_input[0]);
		throw Converter::ImpossibleException();
	}
}

Converter::operator float(void) {
	try {
		return std::stof(this->_input);
	} catch(std::exception& e) {
		if (this->_input.length() == 1 && std::isprint(this->_input[0]))
			return static_cast<float>(this->_input[0]);
		throw Converter::ImpossibleException();
	}
}

Converter::operator double(void) {
	try {
		return std::stod(this->_input);
	} catch(std::exception& e) {
		if (this->_input.length() == 1 && std::isprint(this->_input[0]))
			return static_cast<double>(this->_input[0]);
		throw Converter::ImpossibleException();
	}
}

Converter::Converter(void) {}
Converter::Converter(Converter const& that) {(void)that;}
Converter& Converter::operator=(Converter const& that) {(void)that; return *this;}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:47:22 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/14 21:19:30 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n), _len(0), _sorted(true) {
	this->_vector = new std::vector<int>(n, 0);
}

Span::Span(Span const& that) {*this = that;}

Span::~Span(void) {delete this->_vector;}

Span& Span::operator=(Span const& that) {
	this->_n = that._n;
	this->_len = that._len;
	this->_sorted = that._sorted;
	this->_vector = that._vector;
	return *this;
}

void Span::sort(void) {
	if (this->_sorted) return;
	std::sort(this->_vector->begin(), this->_vector->begin() + this->_len);
	this->_sorted = true;
}


void Span::addNumber(int num) {
	if (this->_len == this->_n) throw Span::FullContainerException();
	this->_sorted = false;
	(*this->_vector)[this->_len] = num;
	++this->_len;
}

int Span::shortestSpan(void) {
	if (this->_len < 2) throw Span::NoSpanException();
	this->sort();
	std::vector<int>::iterator it = this->_vector->begin() + 1;
	int span = *it - *(it - 1);
	for (; it != this->_vector->begin() + this->_len; ++it) {
		span = (*it - *(it - 1) < span) ? (*it - *(it - 1)) : span;
	}
	return span;
}

int Span::longestSpan(void) {
	if (this->_len < 2) throw Span::NoSpanException();
	this->sort();
	return *(this->_vector->begin() + this->_len - 1) - this->_vector->front();
}

unsigned int Span::length(void) {return this->_len;}

Span::Span(void) {}

const char* Span::NoSpanException::what(void) const throw() {return "no or only one number stored";}
const char* Span::FullContainerException::what(void) const throw() {return "container is full";}

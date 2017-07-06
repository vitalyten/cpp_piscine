/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:36:49 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 22:08:42 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed  const & f) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(int n) : _val(n << Fixed::_bpoint) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float n) : _val(roundf(n * (1 << Fixed::_bpoint))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(Fixed const & rhs) const {
	return (this->_val > rhs._val);
}

bool Fixed::operator<(Fixed const & rhs) const {
	return (this->_val < rhs._val);
}

bool Fixed::operator>=(Fixed const & rhs) const {
	return (this->_val >= rhs._val);
}

bool Fixed::operator<=(Fixed const & rhs) const {
	return (this->_val <= rhs._val);
}

bool Fixed::operator==(Fixed const & rhs) const {
	return (this->_val == rhs._val);
}

bool Fixed::operator!=(Fixed const & rhs) const {
	return (this->_val != rhs._val);
}


Fixed Fixed::operator+(Fixed const & rhs) const {
	Fixed ret;
	ret.setRawBits(this->_val + rhs._val);
	return ret;
}

Fixed Fixed::operator-(Fixed const & rhs) const {
	Fixed ret;
	ret.setRawBits(this->_val - rhs._val);
	return ret;
}

Fixed Fixed::operator*(Fixed const & rhs) const {
	Fixed ret;
	ret.setRawBits((this->_val * rhs._val) / (1 << Fixed::_bpoint));
	return ret;
}

Fixed Fixed::operator/(Fixed const & rhs) const {
	Fixed ret;
	ret.setRawBits((this->_val * (1 << Fixed::_bpoint)) / rhs._val);
	return ret;
}


Fixed & Fixed::operator++(void) {
	this->_val++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed ret(*this);
	this->_val++;
	return ret;
}

Fixed & Fixed::operator--(void) {
	this->_val--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed ret(*this);
	this->_val--;
	return ret;
}


Fixed & Fixed::max(Fixed & lhs, Fixed & rhs) {
	return ((lhs._val > rhs._val) ? lhs : rhs);
}

Fixed & Fixed::min(Fixed & lhs, Fixed & rhs) {
	return ((lhs._val < rhs._val) ? lhs : rhs);
}

Fixed const & Fixed::max(Fixed const & lhs, const Fixed & rhs) {
	return ((lhs._val > rhs._val) ? lhs : rhs);
}

Fixed const & Fixed::min(Fixed const & lhs, const Fixed & rhs) {
	return ((lhs._val < rhs._val) ? lhs : rhs);
}


Fixed & Fixed::operator=(Fixed const & rhs) {
	// std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

float Fixed::toFloat(void) const {
	float f = this->_val;
	return (f / (1 << Fixed::_bpoint));
}

int Fixed::toInt(void) const {
	return (this->_val >> Fixed::_bpoint);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

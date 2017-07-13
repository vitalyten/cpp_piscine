/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:25:54 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/12 22:31:04 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T> class Array {
public:
	Array(void) : _arr(NULL), _size(0) {}
	Array(unsigned int n) : _arr(new T[n]), _size(n) {}
	Array(Array const& that) : _arr(new T[that._size]), _size(that._size) {*this = that;}
	~Array(void) {}
	Array& operator=(Array const& that) {
		if (this->_size != that._size) {
			delete this->_arr;
			this->_size = that._size;
			this->_arr = new T[this->_size];
		}
		for (unsigned int i = 0; i < that._size; ++i) {
			this->_arr[i] = that._arr[i];
		}
		return *this;
	}
	T& operator[](unsigned int i) const {
		if (i < 0 || i >= this->_size) throw std::exception();
		return this->_arr[i];
	}
	unsigned int size(void) const {return this->_size;}
private:
	T*				_arr;
	unsigned int	_size;
};

#endif

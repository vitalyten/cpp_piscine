/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/11 21:21:16 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"

int main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "usage: ./convert value" << std::endl;
		return -1;
	}
	std::string str(av[1]);
	if (str.length() == 0) {
		std::cout << "usage: ./convert value" << std::endl;
		return -1;
	}

	Converter converter(av[1]);

	std::cout << "char: ";
	try {
		char c = converter;
		std::cout << "'" << c << "'" << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "int: ";
	try {
		int i = converter;
		std::cout << i << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "float: ";
	try {
		float f = converter;
		std::cout << f;
		if (f == static_cast<int>(f)) std::cout << ".0";
		std::cout << "f" << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "double: ";
	try {
		double d = converter;
		std::cout << d;
		if (d == static_cast<int>(d)) std::cout << ".0";
		std::cout << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:26:04 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/12 22:35:42 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	Array<int> a1;
	Array<char> a2(5);
	Array<std::string> a3(3);

	// std::cout << a1 << std::endl;
	for (unsigned int i = 0; i < 5; ++i) {
		a2[i] = 'a' + i;
	}
	for (unsigned int i = 0; i < 5; ++i) {
		std::cout << a2[i] << " ";
	}
	std::cout << std::endl;

	a3[0] = "zero";
	a3[1] = "one";
	a3[2] = "two";
	for (unsigned int i = 0; i < 3; ++i) {
		std::cout << a3[i] << " ";
	}
	std::cout << std::endl;
	Array<std::string> a4(a3);
	for (unsigned int i = 0; i < a4.size(); ++i) {
		std::cout << a4[i] << " ";
	}
	std::cout << std::endl;
	a3[1] = "oneone";
	for (unsigned int i = 0; i < a3.size(); ++i) {
		std::cout << a3[i] << " ";
	}
	std::cout << std::endl;

	for (unsigned int i = 0; i < a4.size(); ++i) {
		std::cout << a4[i] << " ";
	}
	std::cout << std::endl;
	try {std::cout << a4[4];}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	return 0;
}

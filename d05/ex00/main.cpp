/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 16:18:23 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat b1("b1", 1);
	Bureaucrat b150("b150", 150);
	Bureaucrat b11("b11", 11);
	Bureaucrat b22("b2", 22);
	Bureaucrat b33(b1);
	std::cout << b11;
	std::cout << b22;
	std::cout << b33;
	b11.incrementGrade();
	std::cout << b11;
	b11.decrementGrade();
	std::cout << b11;

	try {
		Bureaucrat b0("b0", 0);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat b200("b200", 200);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		b1.incrementGrade();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		b150.decrementGrade();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

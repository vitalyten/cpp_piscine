/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 23:10:10 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	std::cout << std::endl << std::endl;

	ShrubberyCreationForm scf1("someplace");
	std::cout << scf1;
	b150.signForm(scf1);
	std::cout << scf1;
	b1.executeForm(scf1);
	std::cout << scf1;
	b1.signForm(scf1);
	std::cout << scf1;
	b150.executeForm(scf1);
	std::cout << scf1;
	b1.executeForm(scf1);

	std::cout << std::endl << std::endl;

	RobotomyRequestForm rrf1("someone");
	std::cout << rrf1;
	b150.signForm(rrf1);
	std::cout << rrf1;
	b1.executeForm(rrf1);
	std::cout << rrf1;
	b1.signForm(rrf1);
	std::cout << rrf1;
	b150.executeForm(rrf1);
	std::cout << rrf1;
	b1.executeForm(rrf1);

	std::cout << std::endl << std::endl;

	PresidentialPardonForm ppf1("someone");
	std::cout << ppf1;
	b150.signForm(ppf1);
	std::cout << ppf1;
	b1.executeForm(ppf1);
	std::cout << ppf1;
	b1.signForm(ppf1);
	std::cout << ppf1;
	b150.executeForm(ppf1);
	std::cout << ppf1;
	b1.executeForm(ppf1);

	// Form f1("f1", 1, 1);
	// Form f150("f150", 150, 150);
	// std::cout << f1;
	// std::cout << f150;

	// try {
	// 	Form f0("f0", 0, 0);
	// } catch(std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	Form f200("f200", 200, 200);
	// } catch(std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	f1.beSigned(b150);
	// } catch(std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << f1;
	// f1.beSigned(b1);
	// std::cout << f1;
	// std::cout << f150;
	// b150.signForm(f150);
	// std::cout << f150;
	// return 0;
}

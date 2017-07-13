/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/12 18:54:11 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate(void) {
	int i = rand() % 3;
	if (i == 0) {
		std::cout << "A created" << std::endl;
		return new A();
	}
	if (i == 1) {
		std::cout << "B created" << std::endl;
		return new B();
	}
	std::cout << "C created" << std::endl;
	return new C();
}

//" that randomly instanciates A, B or C" and returns the instance as a Base pointer

void identify_from_pointer(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "Base*: A" << std::endl;
	}
	if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "Base*: B" << std::endl;
	}
	if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "Base*: C" << std::endl;
	}
}

// that displays "A","B" or "C" according to the real type of p.

void identify_from_reference(Base& p) {
	try {
		p = dynamic_cast<A&>(p);
		std::cout << "Base&: A" << std::endl;
	}
	catch(std::exception& e) {}
	try {
		p = dynamic_cast<B&>(p);
		std::cout << "Base&: B" << std::endl;
	}
	catch(std::exception& e) {}
	try {
		p = dynamic_cast<C&>(p);
		std::cout << "Base&: C" << std::endl;
	}
	catch(std::exception& e) {}
}

// that displays "A", "B" or "C" according to the real type of p.

int main(void) {
	Base* b;
	srand(time(0));
	for (int i = 0; i < 10; ++i) {
		b = generate();
		identify_from_pointer(b);
		identify_from_reference(*b);
		delete b;
	}
	return 0;
}

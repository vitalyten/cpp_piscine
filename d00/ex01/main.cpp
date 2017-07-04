/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:32:39 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/03 22:19:59 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void) {
	Phonebook book;
	int code;
	int i;

	while(42) {
		std::string str;
		std::cout << "enter \"ADD\" to add contact" << std::endl;
		std::cout << "enter \"SEARCH\" to search phonebook" << std::endl;
		std::cout << "enter \"EXIT\" to exit" << std::endl;
		std::cin >> str;
		code = book.inst_code(str);
		if (code == 0) return (code);
		if (code < 0) std::cout << "wrong command" << std::endl;
		if (code == 1) {
			if
				(book.isfull()) std::cout << "phonebook is full" << std::endl;
			else
				book.add_contact();
		}
		if (code == 2) {
			if (book.isempty())
				std::cout << "phonebook is empty" << std::endl;
			else
			{
				book.print_contacts();
				std::cout << "enter index: ";
				if (std::cin >> i)
					book.print_contact(i);
				else
				{
					std::cout << "wrong index" << std::endl;
					std::cin.clear();
					std::cin.ignore(256,'\n');
				}
			}
		}
	}
	return (0);
}

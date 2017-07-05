/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:39:57 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 19:45:49 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string str;
	std::string *ptr;
	std::string &ref = str;

	ptr = &str;
	str = "HI THIS IS BRAIN";
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return 0;
}

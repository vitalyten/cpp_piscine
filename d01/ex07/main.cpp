/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 22:45:41 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 23:54:30 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av) {
	std::string name;
	std::string line;
	std::string s1;
	std::string s2;
	size_t start_pos;

	if (ac == 4) {
		name = av[1];
		s1 = av[2];
		s2 = av[3];
		if (name.length() == 0 || s1.length() == 0 || s2.length() == 0) {
			std::cout << "usage: ./replace filename str1 str2" << std::endl;
			return (-1);
		}
		std::ifstream infile(name);
		std::ofstream outfile(name + ".replace");
		while (std::getline(infile, line)) {
			start_pos = 0;
			while ((start_pos = line.find(s1, start_pos)) != std::string::npos) {
				line.replace(start_pos, s1.length(), s2);
				start_pos += s2.length();
			}
			outfile << line << std::endl;
		}
 		infile.close();
		outfile.close();
	} else {
		std::cout << "usage: ./replace filename str1 str2" << std::endl;
	}
	return 0;
}

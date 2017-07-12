/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/12 16:52:15 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void* serialize(void) {
	std::string tab("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	char* ret = new char[16 + sizeof(int)];
	int* n = reinterpret_cast<int*>(ret + 8);

	*n = std::rand();
	for (int i = 0; i < 8; ++i) {
		ret[i] = tab[std::rand() % 62];
		ret[i + 8 + sizeof(int)] = tab[std::rand() % 62];
	}
	return reinterpret_cast<void*>(ret);
}

Data* deserialize(void* raw) {
	Data* data = new Data;
	char* str = reinterpret_cast<char*>(raw);

	data->s1.resize(8);
	data->s2.resize(8);
	data->n = *(reinterpret_cast<int*>(str + 8));
	for (int i = 0; i < 8; ++i) {
		data->s1[i] = str[i];
		data->s2[i] = str[i + 8 + sizeof(int)];
	}
	return data;
}

int main(void) {
	srand(time(0));
	void* raw = serialize();
	std::cout << reinterpret_cast<char*>(raw) << std::endl;
	Data* data = deserialize(raw);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	return 0;
}

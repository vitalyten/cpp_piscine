/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:44:04 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/12 20:20:33 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T> void iter(T* a, int size, void (*f)(T*)) {
	for (int i = 0; i < size; ++i) {
		f(&(a[i]));
	}
}

template <class T> void ft_print(T* a) {
	std::cout << *a << std::endl;
}

int main(void) {
	int a[] = {1,2,3,4,5};
	std::string b[] = {"a", "b", "c", "d", "e"};
	::iter(a, 5, ft_print);
	::iter(b, 5, ft_print);
	return 0;
}

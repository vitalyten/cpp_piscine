/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:12:41 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/13 16:22:38 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main(void) {
	int arr1[] = {1,2,3,4,5,6};
	std::list<int> l1(arr1, arr1 + 6);
	std::vector<int> v1(arr1, arr1 + 6);
	std::cout << easyfind(l1, 3) << std::endl;
	std::cout << easyfind(l1, 9) << std::endl;
	std::cout << easyfind(v1, 3) << std::endl;
	std::cout << easyfind(v1, 9) << std::endl;
	return 0;
}

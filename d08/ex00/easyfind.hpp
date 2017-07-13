/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:12:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/13 16:24:45 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>

template <class T> int easyfind(T container, int n) {
	try {
		typename T::iterator it = find(container.begin(), container.end(), n);
		if (it != container.end())
			return (std::distance(container.begin(), it));
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return -1;
}

#endif

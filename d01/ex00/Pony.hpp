/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:04:11 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 15:36:16 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

// # include <string>
# include <iostream>

class Pony {
public:
	std::string name;

	Pony(std::string);
	~Pony(void);
	void jump(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:13 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 19:22:48 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
public:
	Zombie(void);
	~Zombie(void);

	void announce(void) const;
	void set_type(std::string);
	void set_name(std::string);

private:
	std::string _name;
	std::string _type;
};

#endif

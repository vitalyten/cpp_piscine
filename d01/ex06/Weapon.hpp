/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:24:39 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 21:33:26 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
public:
	Weapon(std::string const &type);
	~Weapon();

	std::string const &getType() const;
	void setType(std::string type);
private:
	std::string _type;
};

#endif

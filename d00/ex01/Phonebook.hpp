/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:02:25 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/03 22:17:45 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iostream>

class Phonebook {
	private:
		static int _count;
	public:
		Contact contacts[8];

		Phonebook(void);
		~Phonebook(void);

		int inst_code(std::string) const;
		bool isfull(void) const;
		bool isempty(void) const;
		void add_contact(void);
		void print_contacts(void);
		void print_contact(int);
		void print_field(std::string);
};

# endif

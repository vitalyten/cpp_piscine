/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:11:10 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/03 21:10:54 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

	public:
		Contact(void);
		~Contact(void);

		void set_first_name(std::string);
		void set_last_name(std::string);
		void set_nickname(std::string);
		void set_login(std::string);
		void set_postal_address(std::string);
		void set_email_address(std::string);
		void set_phone_number(std::string);
		void set_birthday_date(std::string);
		void set_favorite_meal(std::string);
		void set_underwear_color(std::string);
		void set_darkest_secret(std::string);

		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_login();
		std::string get_postal_address();
		std::string get_email_address();
		std::string get_phone_number();
		std::string get_birthday_date();
		std::string get_favorite_meal();
		std::string get_underwear_color();
		std::string get_darkest_secret();
};

# endif

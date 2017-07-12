/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:34:45 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/11 20:34:30 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>

class Converter {
public:
	class ImpossibleException : public std::exception {
	public:
		ImpossibleException(void);
		ImpossibleException(ImpossibleException const&);
		~ImpossibleException(void) throw();
		ImpossibleException& operator=(ImpossibleException const&);
		char const* what(void) const throw();
	};

	class NonDisplayableException : public std::exception {
	public:
		NonDisplayableException(void);
		NonDisplayableException(NonDisplayableException const&);
		~NonDisplayableException(void) throw();
		NonDisplayableException& operator=(NonDisplayableException const&);
		char const* what(void) const throw();
	};

	Converter(char*);
	~Converter(void);

	operator char(void);
	operator int(void);
	operator float(void);
	operator double(void);

private:
	std::string _input;

	Converter(void);
	Converter(Converter const&);
	Converter& operator=(Converter const&);
};

#endif

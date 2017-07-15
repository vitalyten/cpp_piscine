/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:47:24 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/14 21:08:49 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>

class Span {
public:
	Span(unsigned int);
	Span(Span const&);
	~Span(void);
	Span& operator=(Span const&);

	void addNumber(int);
	int shortestSpan(void);
	int longestSpan(void);
	unsigned int length(void);

	struct NoSpanException : std::exception {
		const char* what(void) const throw();
	};

	struct FullContainerException : std::exception {
		const char* what(void) const throw();
	};

	// template <class T> void addRange(typename T::iterator start, typename T::iterator end) {
	// 	for(; start != end; ++start) {
	// 		this->addNumber(*start);
	// 	}
	// }

private:
	unsigned int _n;
	unsigned int _len;
	bool _sorted;
	std::vector<int>* _vector;

	void sort(void);
	Span(void);
};

#endif

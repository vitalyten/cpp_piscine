/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:46:01 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 22:23:38 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// #include <iomanip>

// void		code_print(std::string s) {
// 	std::cout << std::setw(20) << s << std::setw(1) << " : ";
// }

// std::string	truthy(bool val) {
// 	if (val)
// 		return "true";
// 	return "false";
// }

// int 		main( void ) {

// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	Fixed c;

// 	code_print("a");
// 	std::cout << a << std::endl;
// 	code_print("a");
// 	std::cout << a << std::endl;
// 	code_print("++a");
// 	std::cout << ++a << std::endl;
// 	code_print("a");
// 	std::cout << a << std::endl;
// 	code_print("a++");
// 	std::cout << a++ << std::endl;
// 	code_print("a");
// 	std::cout << a << std::endl;

// 	code_print("b");
// 	std::cout << b << std::endl;

// 	code_print("(a = 20)");
// 	std::cout << (a = 20) << std::endl;

// 	code_print("Fixed::max( a, b )");
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	code_print("Fixed::max( b, a )");
// 	std::cout << Fixed::max( b, a ) << std::endl;
// 	code_print("Fixed::max( b, b )");
// 	std::cout << Fixed::max( b, b ) << std::endl;
// 	code_print("Fixed::min( a, b )");
// 	std::cout << Fixed::min( a, b ) << std::endl;
// 	code_print("Fixed::min( b, a )");
// 	std::cout << Fixed::min( b, a ) << std::endl;
// 	code_print("Fixed::min( a, a )");
// 	std::cout << Fixed::min( a, a ) << std::endl;

// 	code_print("truthy(a < b)");
// 	std::cout << truthy(a < b) << std::endl;
// 	code_print("truthy(b < a)");
// 	std::cout << truthy(b < a) << std::endl;
// 	code_print("truthy(a > b)");
// 	std::cout << truthy(a > b) << std::endl;
// 	code_print("truthy(b > a)");
// 	std::cout << truthy(b > a) << std::endl;
// 	code_print("truthy(a <= b)");
// 	std::cout << truthy(a <= b) << std::endl;
// 	code_print("truthy(b <= a)");
// 	std::cout << truthy(b <= a) << std::endl;
// 	code_print("truthy(a >= b)");
// 	std::cout << truthy(a >= b) << std::endl;
// 	code_print("truthy(b >= a)");
// 	std::cout << truthy(b >= a) << std::endl;
// 	code_print("truthy(a == b)");
// 	std::cout << truthy(a == b) << std::endl;
// 	code_print("truthy(b == a)");
// 	std::cout << truthy(b == a) << std::endl;
// 	code_print("truthy(a != b)");
// 	std::cout << truthy(a != b) << std::endl;
// 	code_print("truthy(b != a)");
// 	std::cout << truthy(b != a) << std::endl;

// 	code_print("c");
// 	std::cout << c << std::endl;
// 	code_print("(c = 20.0f)");
// 	std::cout << (c = 20.0f) << std::endl;
// 	code_print("c");
// 	std::cout << c << std::endl;

// 	code_print("truthy(a < c)");
// 	std::cout << truthy(a < c) << std::endl;
// 	code_print("truthy(a > c)");
// 	std::cout << truthy(a > c) << std::endl;
// 	code_print("truthy(a <= c)");
// 	std::cout << truthy(a <= c) << std::endl;
// 	code_print("truthy(a >= c)");
// 	std::cout << truthy(a >= c) << std::endl;
// 	code_print("truthy(a == c)");
// 	std::cout << truthy(a == c) << std::endl;
// 	code_print("truthy(a != c)");
// 	std::cout << truthy(a != c) << std::endl;

// 	code_print("(a + b)");
// 	std::cout << (a + b) << std::endl;
// 	code_print("(a - b)");
// 	std::cout << (a - b) << std::endl;
// 	code_print("(a * b)");
// 	std::cout << (a * b) << std::endl;
// 	code_print("(a / b)");
// 	std::cout << (a / b) << std::endl;
// 	code_print("(b + a)");
// 	std::cout << (b + a) << std::endl;
// 	code_print("(b - a)");
// 	std::cout << (b - a) << std::endl;
// 	code_print("(b * a)");
// 	std::cout << (b * a) << std::endl;
// 	code_print("(b / a)");
// 	std::cout << (b / a) << std::endl;

// 	return 0;
// }

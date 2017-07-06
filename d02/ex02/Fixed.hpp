/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:36:53 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 21:30:00 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed(void);
	Fixed(Fixed  const & f);
	Fixed(int n);
	Fixed(float n);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);

	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;

	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;

	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed & max(Fixed & lhs, Fixed & rhs);
	static Fixed & min(Fixed & lhs, Fixed & rhs);
	static Fixed const & max(Fixed const & lhs, const Fixed & rhs);
	static Fixed const & min(Fixed const & lhs, const Fixed & rhs);

private:
	int _val;
	static int const _bpoint = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif

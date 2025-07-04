/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:17:06 by carlos            #+#    #+#             */
/*   Updated: 2025/07/04 11:23:35 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <math.h>

class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& copy);
	~Fixed();

	Fixed &operator=(Fixed const &src);
	Fixed operator+(Fixed const &src);
	Fixed operator-(Fixed const &src);
	Fixed operator/(Fixed const &src);
	Fixed operator*(Fixed const &src);

	bool operator>(Fixed const &src);
	bool operator<(Fixed const &src);
	bool operator<=(Fixed const &src);
	bool operator>=(Fixed const &src);
	bool operator!=(Fixed const &src);
	bool operator==(Fixed const &src);

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	int getRawBits () const;
	void setRawBits (int const raw);
	float toFloat() const;
	int toInt() const;
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static  Fixed &max( Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
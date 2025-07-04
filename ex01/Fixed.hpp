/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:09:12 by carlos            #+#    #+#             */
/*   Updated: 2025/07/03 11:34:42 by carlos           ###   ########.fr       */
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
	Fixed &operator=(const Fixed &src);
	int getRawBits () const;
	void setRawBits (int const raw);
	float toFloat() const;
	int toInt() const;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
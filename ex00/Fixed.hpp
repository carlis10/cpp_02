/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:08:15 by carlos            #+#    #+#             */
/*   Updated: 2025/07/02 13:25:26 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _bits;
public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();
	Fixed &operator=(const Fixed &src);
	int getRawBits () const;
	void setRawBits (int const raw);

};

#endif

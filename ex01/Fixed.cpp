/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:22:05 by carlos            #+#    #+#             */
/*   Updated: 2025/07/03 12:04:07 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << Fixed::_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(value * (1 << Fixed::_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();

	return *this;
}
int	 Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat() const
{
	return ((float)_value / (1 << Fixed::_bits));
}

int Fixed::toInt() const
{
	return (_value >> Fixed::_bits);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return o;
}
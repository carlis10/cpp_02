/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:17:23 by carlos            #+#    #+#             */
/*   Updated: 2025/07/04 11:33:36 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	
}

Fixed::Fixed(const int value)
{
	_value = value << Fixed::_bits;
}

Fixed::Fixed(const float value)
{
	_value = (int)roundf(value * (1 << Fixed::_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed()
{

}

Fixed &Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->_value = src.getRawBits();

	return *this;
}

Fixed Fixed::operator+(Fixed const &src)
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(Fixed const &src)
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(Fixed const &src)
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(Fixed const &src)
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._value--;
	return (tmp);
}

bool Fixed::operator==(Fixed const &src)
{
	if (this->_value == src._value)
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const &src)
{
	if (this->_value != src._value)
		return (true);
	return (false);
}
bool Fixed::operator>=(Fixed const &src)
{
	if (this->_value >= src._value)
		return (true);
	return (false);
}
bool Fixed::operator<=(Fixed const &src)
{
	if (this->_value <= src._value)
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &src)
{
	if (this->_value < src._value)
		return (true);
	return (false);
}

bool Fixed::operator>(Fixed const &src)
{
	if (this->_value > src._value)
		return (true);
	return (false);
}
int	 Fixed::getRawBits() const
{
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

std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (&a > &b)
		return (b);
	return (a);
}

Fixed &max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (&a > &b)
		return (a);
	return (b);
}
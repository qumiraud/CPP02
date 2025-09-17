/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:21:18 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/17 16:10:37 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const	Fixed::_fractionnalBits = 8;

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int integer) : _fixedPoint(integer << _fractionnalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float floating)
{
	// _fixedPoint = roundf(floating * 256);
	_fixedPoint = roundf(floating * (1 << _fractionnalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& other)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->_fixedPoint = other.getRawBits();
	*this = other;

}

bool	Fixed::operator>(Fixed const & first) const
{
	return (this->getRawBits() > first.getRawBits());
}

bool	Fixed::operator<(Fixed const & first) const
{
	return (this->getRawBits() < first.getRawBits());
}

bool	Fixed::operator<=(Fixed const & first) const
{
	return (this->getRawBits() <= first.getRawBits());
}

bool	Fixed::operator>=(Fixed const & first) const
{
	return (this->getRawBits() >= first.getRawBits());
}

bool	Fixed::operator==(Fixed const & first) const
{
	return (this->getRawBits() == first.getRawBits());
}

bool	Fixed::operator!=(Fixed const & first) const
{
	return (this->getRawBits() != first.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(Fixed const & other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(Fixed const & other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(Fixed const & other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed &	Fixed::operator++(void)
{
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPoint++;
	return (tmp);
}

Fixed &	Fixed::operator=(Fixed const & other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) //if this instances are different
		this->_fixedPoint = other.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int	Fixed::getRawBits(void)const
{
	//std::cout << "getRawBits member function called" <<std::endl;
	return (this->_fixedPoint);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt(void) const
{
	return(roundf(_fixedPoint >> _fractionnalBits));
}

float	Fixed::toFloat(void) const
{
	return((float)_fixedPoint / (1<<_fractionnalBits));
}

std::ostream &	operator<<(std::ostream & outstream, Fixed const & nbr)
{
	outstream << nbr.toFloat();
	return (outstream);
}

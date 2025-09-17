/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:21:18 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/17 10:42:36 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const	Fixed::_fractionnalBits = 8;

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
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
	std::cout << "getRawBits member function called" <<std::endl;
	return (this->_fixedPoint);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

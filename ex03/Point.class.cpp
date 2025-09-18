/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:18:41 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/18 15:35:31 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"


Fixed const &	Point::getXValue( void )const
{
	return(this->_x);
}
Fixed const &	Point::getYValue( void )const
{
	return(this->_y);
}

Point &	Point::operator=(Point const & other)
{
	(void)other;
	std::cerr << "Error : not possible to use overload affectation operand"
			<< "cause types are 'const' so immuables" << std::endl;
	return (*this);
}

Point::Point() : _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Point::Point(float const abcissa, float const ordinate) : _x(abcissa), _y(ordinate)
{
	std::cout << "Parameter constructor called" << std::endl;
}

Point::Point(Point const & other) : _x(other._x), _y(other._y)
{
	std::cout << "Copy constructor called" << std::endl;;
}

Point::~Point()
{
}

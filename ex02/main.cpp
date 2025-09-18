/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:20:59 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/18 14:15:36 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void )
{
	Fixed z;
	Fixed a(9.4f);
	Fixed b(1);
	Fixed c(4.7f);
	Fixed d(4.7f);
	Fixed e(5);
	Fixed const f(a);
	Fixed const g(b);
	Fixed const h( Fixed( 5.05f ) * Fixed( 2 ) );
	if (a > b)
		std::cout << "a bigger than b" << std::endl;
	if (b < a)
		std::cout << "b smaller than a" << std::endl;
	if (c >= d)
		std::cout << "c bigger or equal than d" << std::endl;
	if (c <= d)
		std::cout << "c smaller or equal than d" << std::endl;
	if (c == d)
		std::cout << "c equal d" << std::endl;
	if (d != e)
		std::cout << "d is different of e" << std::endl;

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "e + e =" << e + e << std::endl;
	std::cout << "e - e =" << e - e << std::endl;
	std::cout << "e * e =" << e * e << std::endl;
	std::cout << "e / b =" << e / b << std::endl;

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "z : " << z << std::endl;
	std::cout << "pre-inc :" << ++z << std::endl;
	std::cout << "z : " << z << std::endl;
	std::cout << "post-inc: " << z++ << std::endl;
	std::cout << "z : " << z << std::endl;
	std::cout << "pre-decr : " << --z << std::endl;
	std::cout << "z : " << z << std::endl;
	std::cout << "post-decr : " << z-- << std::endl;
	std::cout << "z : " << z << std::endl;

	std::cout << std::endl << std::endl << std::endl;


	std::cout << h << std::endl;
	std::cout << "max between a and h : " << Fixed::max( a, h ) << std::endl;
	std::cout << "min between a and h : " << Fixed::min( a, h ) << std::endl;
	std::cout << "max between f and g : " << Fixed::max( f, g ) << std::endl;
	std::cout << "min between f and g : " << Fixed::min( f, g ) << std::endl;


	return (0);
}

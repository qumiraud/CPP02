/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:20:59 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/17 16:03:42 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void )
{
	Fixed z;
	Fixed a(9.4f);
	Fixed b(3.75f);
	Fixed c(4.7f);
	Fixed d(4.7f);
	Fixed e(5);
	// Fixed const f( Fixed( 5.05f ) * Fixed( 2 ) );
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

	std::cout << z << std::endl;
	std::cout << ++z << std::endl;
	std::cout << z << std::endl;
	std::cout << z++ << std::endl;
	std::cout << z << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}

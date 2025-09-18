/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:20:59 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/18 16:07:38 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"
#include "Point.class.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point const	a(1.0f, 1.0f);
	Point const	b(1.75f, 4.4f);
	Point const	c(3.45f, 0.6f);
	Point const	point(1.75f, 4.396f);

	if (bsp(a, b, c, point) == true)
		std ::cout << "the point is in triangle" << std::endl;
	else
		std::cout << "the point isn't in triangle" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:19:17 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/18 16:05:42 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"
#include "Point.class.hpp"

float area(Point const &a, Point const &b, Point const &c)
{
	float	result;

	result = fabs((a.getXValue().toFloat() * (b.getYValue().toFloat() - c.getYValue().toFloat()) +
				b.getXValue().toFloat() * (c.getYValue().toFloat() - a.getYValue().toFloat()) +
				c.getXValue().toFloat() * (a.getYValue().toFloat() - b.getYValue().toFloat())) / 2.0f);
	return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	Area;
	float	Area1;
	float	Area2;
	float	Area3;
	float	epsilon;
	bool	onEdgeOrVertex;

	epsilon = 0.0001f;
	Area = area(a, b, c);
	Area1 = area(point, b, c);
	Area2 = area(a, point, c);
	Area3 = area(a, b, point);

	onEdgeOrVertex = (Area1 < epsilon || Area2 < epsilon || Area3 < epsilon);

	return (Area == Area1 + Area2 + Area3 && !onEdgeOrVertex);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:19:03 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/18 15:07:49 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
# define POINT_CLASS_HPP
# include <iostream>
# include <stdlib.h>
# include "Fixed.class.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point();
		Point(float const abcissa, float const ordinate);
		Point(Point const& other);
		~Point();
		Fixed const &	getXValue( void )const;
		Fixed const &	getYValue( void )const;


		Point&	operator=(Point const& other);
};


#endif

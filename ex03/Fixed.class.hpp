/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:21:11 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/18 14:09:07 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_fixedPoint;
		static int const _fractionnalBits;
	public:
		Fixed();								//default constructor	|
		Fixed(const int	integer);
		Fixed(const float	floating);
		Fixed(const Fixed& other);				//copy constructor		|
		~Fixed();								//destructor			|

		Fixed&	operator=(Fixed const & other);	//attribution operand	|---->cannoncical form

		Fixed	operator+(Fixed const & toAdd) const;
		Fixed	operator-(Fixed const & toLess) const;
		Fixed	operator*(Fixed const & toMultiply) const;
		Fixed	operator/(Fixed const & toDivide) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed&	min(Fixed & first, Fixed & second);
		static Fixed const&	min(Fixed const & first, Fixed const & second);
		static Fixed&	max(Fixed & first, Fixed & second);
		static Fixed const&	max(Fixed const & first, Fixed const & second);


		bool	operator>(Fixed const & first) const;
		bool	operator<(Fixed const & first) const;
		bool	operator>=(Fixed const & first) const;
		bool	operator<=(Fixed const & first) const;
		bool	operator==(Fixed const & first) const;
		bool	operator!=(Fixed const & first) const;



		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &	operator<<(std::ostream & outstream, Fixed const & nbr);


#endif

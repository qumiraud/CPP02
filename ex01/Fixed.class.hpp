/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:21:11 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/11 17:24:25 by qumiraud         ###   ########.fr       */
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
		Fixed(const Fixed& other);				//copy constructor		|
		~Fixed();								//destructor			|
		Fixed&	operator=(Fixed const & other);	//attribution operand	|---->cannoncical form
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};



#endif

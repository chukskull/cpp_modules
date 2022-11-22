/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:55:46 by snagat            #+#    #+#             */
/*   Updated: 2022/11/09 18:11:44 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_fixed_point;
	static	const	int	_fract_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const int integer);
    Fixed(const float floating);
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &obj);
	int	getRawBits( void ) const;
	void	setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};


std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif

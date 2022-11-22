/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:55:46 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 10:36:06 by snagat           ###   ########.fr       */
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
	int     getRawBits( void ) const;
	void	setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    //comparison
    bool   operator<(const Fixed &obj);
    bool   operator>(const Fixed &obj);
    bool   operator>=(const Fixed &obj);
    bool   operator<=(const Fixed &obj);
    bool   operator==(const Fixed &obj);
    bool   operator!=(const Fixed &obj); 


    //increment, decrment
    Fixed  operator++(int);
    Fixed  operator--(int);
    //preincrement, predecrement.
    Fixed  &operator++();
    Fixed  &operator--();
    //arithmetic oper
    Fixed   operator+(const Fixed &obj1);
    Fixed   operator-(const Fixed &obj1);
    Fixed   operator/(const Fixed &obj1);
    Fixed   operator*(const Fixed &obj1);
    
    //d7ekt m3a ybncl
    static Fixed& min( Fixed &obj1,  Fixed &obj2);
    static const Fixed& min(const Fixed &obj1, const Fixed &obj2);
    static Fixed& max( Fixed &obj1,  Fixed &obj2);
    static const Fixed& max(const Fixed &obj1, const Fixed &obj2);
};


std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif

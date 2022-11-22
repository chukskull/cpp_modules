/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:39:03 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 10:36:56 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>



Fixed::Fixed():_fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->_fixed_point = obj._fixed_point;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_fixed_point = obj._fixed_point;
	return *this;
}

int	Fixed::getRawBits() const
{
	std::cout<< "getRawBits member function called" << std::endl;
	return(this->_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<< "setRawBits member function called" << std::endl;
	this->_fixed_point = raw << this->_fract_bits;
}


Fixed::Fixed(const int integer)
{
    this->_fixed_point = integer << this->_fract_bits;
}

Fixed::Fixed(const float floating){

    this->_fixed_point = roundf(floating * (1 << _fract_bits));
}

float Fixed::toFloat(void) const{
	
   return (float)(this->_fixed_point / (float)(1 << _fract_bits));
}

int Fixed::toInt(void) const{
    return this->_fixed_point >> _fract_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

// mo9arana khw
bool	Fixed::operator==(const Fixed  &obj)
{
	if (this->_fixed_point == obj._fixed_point)
		return 1;
	return 0;
}

bool	Fixed::operator>(const Fixed  &obj)
{
	if (this->_fixed_point > obj._fixed_point)
		return 1;
	return 0;
}

bool	Fixed::operator<(const Fixed  &obj)
{
	if (this->_fixed_point < obj._fixed_point)
		return 1;
	return 0;
}

bool	Fixed::operator>=(const Fixed  &obj)
{
	if (this->_fixed_point >= obj._fixed_point)
		return 1;
	return 0;
}

bool	Fixed::operator<=(const Fixed  &obj)
{
	if (this->_fixed_point <= obj._fixed_point)
		return 1;
	return 0;
}
bool	Fixed::operator!=(const Fixed  &obj)
{
	if (this->_fixed_point != obj._fixed_point)
		return 1;
	return 0;
}

//increment

Fixed	Fixed::operator++(int)
{
	Fixed	temp;
	temp._fixed_point = this->_fixed_point;
	this->_fixed_point++;
	return temp;
}

//decrement
Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp._fixed_point = this->_fixed_point;
	this->_fixed_point--;
	return temp;
}

//preincre

Fixed	&Fixed::operator++()
{
	this->_fixed_point++;
	return *this;
}
//predecrem
Fixed	&Fixed::operator--()
{
	this->_fixed_point--;
	return	*this;
}


Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1._fixed_point > obj2._fixed_point)
		return obj2;
	return obj1;
}

Fixed& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1._fixed_point > obj2._fixed_point)
		return obj1;
	return obj2;
}

const	Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1._fixed_point > obj2._fixed_point)
		return obj2;
	return obj1;
}
const	Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1._fixed_point > obj2._fixed_point)
		return obj1;
	return obj2;
}

Fixed   Fixed::operator+(const Fixed &obj1)
{
	return(Fixed(toFloat() + obj1.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &obj1)
{
	return (Fixed(toFloat() - obj1.toFloat()));

}

Fixed   Fixed::operator/(const Fixed &obj1)
{
	return (Fixed(toFloat() / obj1.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &obj1)
{

	return (Fixed(toFloat() * obj1.toFloat()));
}

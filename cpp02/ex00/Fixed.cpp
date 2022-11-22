/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:39:03 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 10:18:50 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>



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

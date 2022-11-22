/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:22:21 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 09:51:12 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
	int					_fixed_point;
	static	const	int	_fract_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &obj);
	int		getRawBits( void ) const;
	void	setRawBits(int const raw);
};



#endif
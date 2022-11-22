/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:52:07 by snagat            #+#    #+#             */
/*   Updated: 2022/11/17 16:23:29 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP


#include <stdint.h>
#include <iostream>
class Data
{
	private:
		int     _integer;
		char    _char;
		double	_double;
		float	_float;
	public:
		Data();
		~Data();
		char	_get_char();
		double	_get_double();
		float	_get_float();
		int		_get_int();
		void	_set_char(char c);
		void	_set_double(double d);
		void	_set_float(float f);
		void	_set_int(int u);

};
uintptr_t   serialize(Data *ptr);
Data 		*deserialize(uintptr_t raw);

#endif
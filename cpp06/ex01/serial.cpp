/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:00:57 by snagat            #+#    #+#             */
/*   Updated: 2022/11/17 16:34:05 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"
#include <iostream>
#include "serial.hpp"


uintptr_t   serialize(Data *ptr)
{
    return reinterpret_cast <uintptr_t > (ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast <Data *> (raw);
}
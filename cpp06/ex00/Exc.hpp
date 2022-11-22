/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:23:21 by snagat            #+#    #+#             */
/*   Updated: 2022/11/16 21:53:23 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXC_HPP
# define EXC_HPP

#include <exception>

#include <stdio.h>


class Excp :public std::exception
{
    public:
		const char* what() const throw();
};

#endif
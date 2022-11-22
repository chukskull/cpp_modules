/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:42:40 by snagat            #+#    #+#             */
/*   Updated: 2022/11/21 11:11:42 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <exception>

template <class T>

int  &easyfind(T tem, int d)
{
   typename T::iterator it;

    it = std::find(tem.begin(), tem.end(), d);
    if(it == tem.end())
        throw std::invalid_argument("the number not found");
    return *it;
}
#endif
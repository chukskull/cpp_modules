/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:17:06 by snagat            #+#    #+#             */
/*   Updated: 2022/11/21 18:02:33 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <bits/stdc++.h>
#include <iterator>


Span::Span():_N(0), vec(0)
{
    
}

Span::Span(unsigned int N):_N(N)
{
   
}

Span::~Span()
{
}

Span::Span(Span const & src )
{
    *this = src;
}

Span &				Span::operator=(Span const & rhs )
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < rhs.vec.size(); i++)
            this->vec.push_back(rhs.vec[i]);
	}
	return *this;
}


unsigned int Span::getSize()const
{
    return(this->_N);
}

void    Span::addNumber(int number)
{
    if (this->vec.size() >= this->getSize())
        throw std::out_of_range("out of range");
    else
        vec.push_back(number);
}

unsigned int    Span::shortestSpan()
{
    std::vector<int>::iterator  iter;
    int                         diff;
    int                         isSupe;
    
    if (this->vec.size() < 2 || getSize() < 2)
        throw "size of the vector is small";
    std::sort(this->vec.begin(), this->vec.end());
    iter = this->vec.begin();
    diff = *(iter + 1) - *iter;
    for (iter = this->vec.begin() + 1 ; iter < this->vec.end() - 1; iter++)
    {
        isSupe = *(iter + 1) - *iter;
        if (isSupe < diff)
            diff = isSupe;
    }
    return diff;
}

unsigned int    Span::longestSpan()
{
    if (this->vec.size() < 2)
        throw "size of vector is small";
   int &min = *std::min_element(this->vec.begin(), this->vec.end());
   int &max = *std::max_element(this->vec.begin(), this->vec.end());
    
    return max - min;
}

void   Span::fillarr()
{
    unsigned int i = 0;
    srand(time(NULL));
    while(i < _N)
    {
        vec.push_back(rand());
        i ++;
    }
}



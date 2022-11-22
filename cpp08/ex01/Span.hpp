/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:13:54 by snagat            #+#    #+#             */
/*   Updated: 2022/11/21 17:55:56 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP


#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int      _N;
    std::vector<int>    vec;

public:
    Span(unsigned int store);
    Span();
    ~Span();
    Span(Span const &src);
    Span &  operator=(Span const &rhs);
    
    void            addNumber(int number);
    unsigned int    getSize() const;
    unsigned int    shortestSpan(); 
    unsigned int    longestSpan();
    void            fillarr();
};





#endif
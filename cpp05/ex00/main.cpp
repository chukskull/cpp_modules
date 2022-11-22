/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:21:20 by snagat            #+#    #+#             */
/*   Updated: 2022/11/12 16:43:52 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
 
int main() {
   Bureaucrat  snagat(1, "saleh");
   Bureaucrat  amine(150, "minix");
   Bureaucrat  olabrahm(0, "osm");

   amine._decrememt();
   snagat._increment();
   std::cout << snagat << std::endl;
   std::cout << amine << std::endl;
   return 0;
}
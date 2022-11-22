/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:21:20 by snagat            #+#    #+#             */
/*   Updated: 2022/11/15 17:28:57 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
# include "Form.hpp"
#include <iostream>
#include <exception>
 
int main() {
   Bureaucrat  snagat(1, "saleh");
   Bureaucrat  amine(150, "minix");
   Bureaucrat  olabrahm(2, "osm");
   Form  hh(150, "CDI", 10);
   Form c(hh);

   std::cout <<c.isSigned() << std::endl; 
   amine._decrememt();
   snagat._increment();
   // std::cout << snagat << std::endl;
   // std::cout << amine << std::endl;
   snagat.signForm(hh);
   snagat.signForm(c);
   std::cout <<c.isSigned() << std::endl;
   olabrahm.signForm(hh);
   std::cout <<c.isSigned() << std::endl;
   olabrahm._increment(); 
   olabrahm.signForm(c);
   amine.signForm(c);
   return 0;
}
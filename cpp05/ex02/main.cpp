/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:21:20 by snagat            #+#    #+#             */
/*   Updated: 2022/11/15 14:10:15 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include <iostream>
# include <exception>
 
int main() {

   ShrubberyCreationForm   hh;
   PresidentialPardonForm  ok;
   RobotomyRequestForm     cdi;
   
   Bureaucrat  snagat(10, "snagat");
   Bureaucrat  olabrahm(120, "osm");
   Bureaucrat  ybensel(20, "ybncl");


  
   olabrahm.signForm(hh);
   olabrahm.executeForm(hh);
   try
   {
      hh.execute(olabrahm);
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }
   std::cout << hh.isSigned()<< std::endl;
   
  
   std::cout <<("-------------------------------")<< std::endl;
   ok.setType("Bitcoin");
   snagat.signForm(ok);
   snagat.executeForm(ok);
   try
   {
     ok.execute(snagat);
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }
   
   std::cout <<"-------------------------"<< std::endl;
   ybensel.signForm(cdi);
   ybensel.executeForm(cdi);
  try
  {
      cdi.execute(ybensel);
  }
  catch(const std::exception& e)
  {
   std::cerr << e.what() << '\n';
  }
  
   return 0;
}
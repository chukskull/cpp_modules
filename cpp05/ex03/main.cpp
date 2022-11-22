/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:21:20 by snagat            #+#    #+#             */
/*   Updated: 2022/11/15 17:40:57 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include <iostream>
# include <exception>
# include "Intern.hpp"
 
int main() {

   Intern   random;
   Form     *rrf;
   std::cout <<("-------------------------------")<< std::endl;
   Bureaucrat  snagat(12, "snagat");
   
   try
   {
      rrf = random.makeForm("RobotomyRequest", "sure");
      snagat.signForm(*rrf);
      snagat.executeForm(*rrf);
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }
   return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:07:23 by snagat            #+#    #+#             */
/*   Updated: 2022/11/03 14:42:03 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string var = "HI THIS IS BRIAN";
	std::string var2 = "HI THIS IS BRIAssN";
	std::string *stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << "The memory address of the string variable   :" << &var << std::endl;
	std::cout<< "The memory address held by stringPTR    : " << stringPTR << std::endl; 
	std::cout << "The memory address held by stringREF   : "<< &stringREF << std::endl;
	std::cout << "-------------"<< std::endl;
	std::cout << var << std::endl; 
	std::cout << *stringPTR << std::endl; 
	std::cout << stringREF << std::endl; 
	return 0;
}

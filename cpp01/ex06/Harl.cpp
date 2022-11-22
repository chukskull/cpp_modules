/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:29:07 by snagat            #+#    #+#             */
/*   Updated: 2022/11/04 20:26:33 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void    Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"<<std::endl;
}

void    Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<<std::endl;
}

void    Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void    Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<"This is unacceptable ! I want to speak to the manager now."<<std::endl;
}
void	Harl::notfound( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
}

void	Harl::complain( std::string level)
{
	int	i = 0;
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR", "NOT FOUND"};
	while( i  < 4 && (arr[i].compare(level)))
		i++;
	switch(i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			this->notfound();
	}
}

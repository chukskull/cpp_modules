/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:10:07 by snagat            #+#    #+#             */
/*   Updated: 2022/11/04 18:02:28 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include    "Harl.hpp"
#include <iostream>

void    Harl::debug( void )
{
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"<<std::endl;
}

void    Harl::info( void )
{
	std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<<std::endl;
}

void    Harl::warning( void )
{
	std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void    Harl::error( void )
{
	std::cout <<"This is unacceptable ! I want to speak to the manager now."<<std::endl;
}
void	Harl::notfound( void )
{
	std::cout << "not found"<<std::endl;
}

void	Harl::complain( std::string level)
{
	int	i = 0;
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR", "NOT FOUND"};
	void	(Harl::*point[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::notfound};
	while(i < 4 && arr[i] != level)
		i++;
	(this->*point[i])();
}
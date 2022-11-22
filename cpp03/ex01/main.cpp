/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:02:00 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 16:58:18 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{

    ScavTrap   sn("snagat");
    ScavTrap   ybc;

    std::cout << sn << std::endl;
    std::cout << ybc << std::endl;
    ybc.setName("ybencel");
    sn.attack(ybc.get_name());
    std::cout << ybc << std::endl;    // std::cout << sn.get_name() <<std::endl;
    ybc.takeDamage(sn.getDamage());
    std::cout << ybc << std::endl; 
    puts("------------");
    std::cout << sn << std::endl;
    ybc.beRepaired(20);
    std::cout << ybc << std::endl;
    puts("-------------");
    sn.guardGate();
    return 0;
}
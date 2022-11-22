/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:59:23 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 17:39:55 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    
    FragTrap   sn;
    FragTrap  ybc;

    std::cout << sn << std::endl;
    std::cout << ybc << std::endl;
    sn.attack(ybc.get_name());
    std::cout << ybc << std::endl;    // std::cout << sn.get_name() <<std::endl;
    ybc.takeDamage(sn.getDamage());
    std::cout << ybc << std::endl; 
    puts("------------");
    std::cout << sn << std::endl;
    ybc.beRepaired(20);
    std::cout << ybc << std::endl;
    puts("-------------");
    sn.highFivesGuys();
    return 0;
}
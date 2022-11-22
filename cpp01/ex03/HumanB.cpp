/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:19:21 by snagat            #+#    #+#             */
/*   Updated: 2022/11/13 10:04:15 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   <iostream>
# include "HumanB.hpp"
# include "Weapon.hpp"

void	HumanB::attack()
{
	if (this->weapon == NULL)
		return ;
	std::cout <<  this->name << "attack with their";
	std::cout << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}
void    HumanB::setWeapon(Weapon &wpn)
{
    this->weapon = &wpn;
    return ;
}
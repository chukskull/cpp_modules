/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:20:00 by snagat            #+#    #+#             */
/*   Updated: 2022/11/13 10:04:36 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   <iostream>
# include "HumanA.hpp"
# include "Weapon.hpp"

void	HumanA::attack()
{
	std::cout  << this->name  << "attack with their";
	std::cout  << this->weapon.getType() << std::endl;
}
HumanA::HumanA(std::string name, Weapon &wpn) : weapon(wpn)
{
	this->name = name;
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:08:58 by snagat            #+#    #+#             */
/*   Updated: 2022/11/03 12:15:59 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


const   std::string &Weapon::getType()
{
    return this->type;
}

void	Weapon::setType(const std::string &type)
{
    this->type = type;
}  

Weapon::Weapon(std::string  type)
{
    this->type = type;
    return ;
}

Weapon::Weapon()
{
    this->type = "";
    return ;
}
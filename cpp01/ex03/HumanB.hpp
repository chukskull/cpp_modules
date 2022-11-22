/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:14:12 by snagat            #+#    #+#             */
/*   Updated: 2022/11/03 14:36:54 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon  *weapon;
    std::string name;
public:
    HumanB(std::string name);
    void    attack();
    void    setWeapon(Weapon &Weapon);
};

#endif
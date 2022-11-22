/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:55:06 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 17:48:52 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("ScavTrap",20, 50, 100)
{
    std::cout << "Default constructor ScavTrap"<<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 20, 50, 100)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
    std::cout << "Copy Constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap  called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->get_name() + " " << "in Gate mode " << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_hit_point <= 0 || this->_energy_point <= 0)
        std::cout << "Unsuf HitPoints and EnergyPoint" << std::endl;
    else
    {
        this->_energy_point -= 1;
        std::cout << "for ScavTrap " <<this->_name + " " << "attacks " << target+ " " << "causing " << this->_attack_damage << std::endl;
    }
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
    o <<" name :" <<i.get_name()<<std::endl;
    o << " Damage :"<<i.getDamage()<<std::endl;
    o <<" Energy :" <<i.getEnergy()<<std::endl;
    o <<" Hit_points :" <<i.getHitPoint()<<std::endl;
    return o;
}
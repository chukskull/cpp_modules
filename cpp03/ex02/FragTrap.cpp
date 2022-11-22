/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:55:06 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 17:48:03 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("FragTrap",30, 100, 100)
{
    std::cout << "Default constructor FragTrap"<<std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 30, 100, 100)
{
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
    std::cout << "Copy Constructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap  called" << std::endl;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
    o <<" name :" <<i.get_name()<<std::endl;
    o << " Damage :"<<i.getDamage()<<std::endl;
    o <<" Energy :" <<i.getEnergy()<<std::endl;
    o <<" Hit_points :" <<i.getHitPoint()<<std::endl;
    return o;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout<< "High five Guys" <<std::endl;
}

void    FragTrap::attack(const std::string &target)
{
    if (this->_hit_point <= 0 || this->_energy_point <= 0)
        std::cout << "Unsuf HitPoints and EnergyPoint" << std::endl;
    else
    {
        this->_energy_point -= 1;
        std::cout << "for FragTrap" <<this->_name + " " << "attacks " << target+ " " << "causing " << this->_attack_damage << std::endl;
    }
}

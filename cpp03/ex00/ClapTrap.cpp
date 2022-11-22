/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:13:25 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 17:51:51 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("defualt"), _attack_damage(0),_energy_point(10),_hit_point(10)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}



ClapTrap::ClapTrap(std::string name):_attack_damage(0),_energy_point(10),_hit_point(10)
{
    std::cout << "Constructor ClapTrap called" << std::endl;
    this->_name = name;
}

ClapTrap::ClapTrap(std::string name, int Ad, int Ep, int Hp): _name(name), _attack_damage(Ad), _energy_point(Ep), _hit_point(Hp)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj):_name(obj.get_name()),_attack_damage(obj.getDamage()), _energy_point(obj.getEnergy()), _hit_point(obj.getHitPoint())
{
    std::cout << "Copy Constructor ClasTrap called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_hit_point <= 0 || this->_energy_point <= 0)
        std::cout << "Unsuf HitPoints and EnergyPoint" << std::endl;
    else
    {
        this->_energy_point -= 1;
        std::cout << this->_name + " " << "attacks " << target+ " " << "causing " << this->_attack_damage << std::endl;
    }
}


void    ClapTrap::takeDamage(unsigned int amount)
{
    int OneShot;

    OneShot = this->_hit_point - amount;
    if (amount > 0)
        this->_hit_point -=  amount;
    else
    {
       this->_hit_point = 0;
    }
      std::cout << this->_name + " " << "take damage " << amount  << std::endl;
}

void    ClapTrap::setDamage(unsigned int dmg)
{
    this->_attack_damage = dmg;
    std::cout << "setting damage for " + this->_name + " :" << this->_attack_damage << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
   int  d;

    d = amount + this->_hit_point;
    this->_hit_point = d;
    this->_energy_point -= 1;
    std::cout << this->_name << "Repaired" <<std::endl;
}

std::string ClapTrap::get_name()const
{
    return(this->_name);
}

int ClapTrap::getDamage()const
{
    return(this->_attack_damage);
}

int ClapTrap::getEnergy()const
{
    return(this->_energy_point);
}

int ClapTrap::getHitPoint()const
{
    return(this->_hit_point);
}

void    ClapTrap::setName(std::string name)
{
    std::cout << "setting name for " + name << std::endl;
    this->_name = name; 
}

void   ClapTrap::printStatus()
{
    std::cout << "name: "<< this->_name << std::endl;
    std::cout << "damage: "<< this->_attack_damage << std::endl;
    std::cout << "energy_point: "<< this->_energy_point << std::endl;
    std::cout << "hit_point: "<< this->_hit_point << std::endl;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
    o <<" name :" <<i.get_name()<<std::endl;
    o << " Damage :"<<i.getDamage()<<std::endl;
    o <<" Energy :" <<i.getEnergy()<<std::endl;
    o <<" Hit_points :" <<i.getHitPoint()<<std::endl;
    return o;
}

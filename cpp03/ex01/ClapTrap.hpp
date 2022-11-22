/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:59:18 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 17:34:01 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_attack_damage;
	int			_energy_point;
	int			_hit_point;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap(std::string name, int Ad, int Ep, int Hp);

	ClapTrap &operator=(const ClapTrap &obj);
	std::string	get_name() const;
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setDamage(unsigned int dmg);
	int		getDamage() const;
	int		getEnergy() const;
	int		getHitPoint() const;
	void    setName(std::string name);
	void	printStatus();

};
std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );



#endif
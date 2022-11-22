/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:18:50 by snagat            #+#    #+#             */
/*   Updated: 2022/11/13 10:00:01 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
void	Zombie::announce( void )
{
	std::cout << this->name << " " << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie	*my_zom = new Zombie(name);

	return my_zom;
}

void	randomChump(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = newZombie(name);
	new_zombie->announce();
	delete new_zombie;
	return ;
}
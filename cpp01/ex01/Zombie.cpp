/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:18:50 by snagat            #+#    #+#             */
/*   Updated: 2022/11/13 10:01:05 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie( void )
{
	std::cout << "Default Destructor called" << std::endl;
	return ;
}
void	Zombie::announce( void )
{
	std::cout << this->name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

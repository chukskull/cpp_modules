/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:43:18 by snagat            #+#    #+#             */
/*   Updated: 2022/11/02 12:50:37 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*head_zombie = new Zombie [N];
    for(int i = 0; i < N; i++)
	{
		head_zombie[i].set_name(name); 
	}
	return head_zombie;
}

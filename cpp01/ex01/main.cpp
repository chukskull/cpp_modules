/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:06:56 by snagat            #+#    #+#             */
/*   Updated: 2022/11/02 12:55:43 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*new_z;

	new_z = zombieHorde(3, "obouadel");

	for(int i = 0; i < 3; i++)
	{
		new_z[i].announce();
	}
	delete [] new_z;
	return 0;
}
   
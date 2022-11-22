/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:06:56 by snagat            #+#    #+#             */
/*   Updated: 2022/11/02 10:38:40 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*new_z;

	new_z = newZombie("smanmsa");
	randomChump("Eanbty");
	randomChump("anadanb");
	randomChump("Foo");
	new_z->announce();
	delete new_z;
	return 0;
}
   
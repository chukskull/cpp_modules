/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:14:49 by snagat            #+#    #+#             */
/*   Updated: 2022/11/02 12:45:16 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string	name;
public:
	Zombie(std::string name);
    void	announce( void );
	~Zombie();
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
#endif
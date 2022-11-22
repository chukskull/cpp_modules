/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:14:49 by snagat            #+#    #+#             */
/*   Updated: 2022/11/02 12:56:58 by snagat           ###   ########.fr       */
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
	Zombie(){
        std::cout << "Constructor called" << std::endl;
    };
    void	announce( void );
    void    set_name(std::string name);
	~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);
#endif
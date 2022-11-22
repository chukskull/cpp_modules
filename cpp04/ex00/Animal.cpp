/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:18:19 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 21:39:21 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal(): type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "CopyConstructor Animal called" << std::endl;
	this->type = src.type;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.geType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Type = " << i.geType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Animal::makeSound(void) const
{
	std::cout << "Bark !!" << std ::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
std::string	Animal::geType() const
{
	return this->type;
}
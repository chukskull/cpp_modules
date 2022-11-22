/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:08:54 by snagat            #+#    #+#             */
/*   Updated: 2022/11/14 21:40:31 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat():Animal("Cat")
{
	std::cout << "Default Cats constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "CopyConstructor Cats called" << std::endl;
	this->type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Destructor Cats called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.geType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Cat::makeSound(void)const
{
	std::cout << "Cats dont Bark !!" << std ::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Type = " << i.geType();
	return o;
}

/* ************************************************************************** */
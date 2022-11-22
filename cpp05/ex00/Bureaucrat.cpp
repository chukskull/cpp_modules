/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:35:06 by snagat            #+#    #+#             */
/*   Updated: 2022/11/12 18:16:05 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat():name("ok"), grade(10)
{
	std::cout << "Default Constructor Called"<< std::endl;
}

Bureaucrat::Bureaucrat(const int grade, std::string name_) :name(name_)
{
	std::cout << "Constructor Called"<< std::endl;
	try{
		this->setGrade(grade);
	}
	catch (std::exception &a)
	{
		std::cout<< a.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	std::cout << "Copy Constructor Called"<< std::endl;
	this->grade = src._getGrade();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called"<< std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->grade = rhs._getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i._getName() << " bureaucrat grade " << i._getGrade();
	return o;
}

const char*	Bureaucrat::GradeTooHighException:: what() const throw()
{
	return "GradeTooHighException";
}

const char*	Bureaucrat::GradeTooLowException:: what() const throw()
{
	return "GradeTooLowException";
}
//getters

std::string Bureaucrat::_getName()const
{
	return this->name;
}

int	Bureaucrat::_getGrade()const {
	return this->grade;
}
/*
** --------------------------------- Increment Decrement ----------------------------------
*/
void	Bureaucrat::_increment()
{
	try{
		this->setGrade(this->grade - 1);
	}
	catch(std::exception	&h)
	{
		std::cout << h.what() << std::endl;
	}
}
void	Bureaucrat::_decrememt()
{
	try{
		this->setGrade(this->grade + 1);
	}
	catch(std::exception	&h)
	{
		std::cout << h.what() << std::endl;
	}
}

void	Bureaucrat::setGrade(int grade)
{
	GradeTooHighException	a;
	GradeTooLowException	b;

	if (grade <= 0)
		throw	a;
	else if(grade > 150)
		throw	b;
	else
		this->grade = grade;
}

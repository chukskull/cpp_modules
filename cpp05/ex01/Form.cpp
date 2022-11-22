/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:22:19 by snagat            #+#    #+#             */
/*   Updated: 2022/11/13 16:08:58 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form():_signed(UNSIGNED), c_grade(50), c_excute(50)
{
	std::cout << "Default constructor called" << std::endl;
}

Form::Form( const Form & src ): name(src.name), _signed(src._signed),c_grade(src.c_grade),c_excute(src.c_excute)
{
	std::cout << "Copy Constructor" <<std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Desctructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.isSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "_name=" <<  i.getName()<<std::endl;
	o << "_grade= " << i.getGrade()<<std::endl;
	o << "_excute grade = " << i.getExcute()<<std::endl;
	o <<"_signed grade= " << i.isSigned()<<std::endl;
	return o;
}

void	Form::beSigned(Bureaucrat const &br)
{
	GradeTooHighException	a;
	GradeTooLowException	b;

	if (br._getGrade() < 1)
		throw a;
	else if (br._getGrade() > this->c_grade)
		throw b;
	else if(br._getGrade() < this->c_grade)
		this->_signed = SIGNED;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */

bool	Form::isSigned() const
{
	return this->_signed;
}

int	Form::getGrade() const
{
	return (this->c_grade);
}

int	Form::getExcute() const
{
	return this->c_excute;
}

std::string	Form::getName() const
{
	return this->name;
}

Form::Form(const int grade, std::string name, const int execute) :name(name), _signed(0),c_grade(grade), c_excute(execute)
{
	GradeTooHighException	a;
	GradeTooLowException	b;
	std::cout << "Constructor Called"<< std::endl;
	
	if (this->c_grade <= 0 || this->c_excute <= 0)
		throw a;
	else if (this->c_grade > 150 || this->c_excute > 150)
		throw b;
}

const char*	Form::GradeTooHighException:: what() const throw()
{
	return "GradeTooHighException";
}

const char*	Form::GradeTooLowException:: what() const throw()
{
	return "GradeTooLowException";
}

void	Form::setSigned()
{
	this->_signed = 0;
}
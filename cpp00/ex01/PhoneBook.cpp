/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:44:52 by snagat            #+#    #+#             */
/*   Updated: 2022/11/07 14:09:53 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <string>
#include "Contact.hpp"

int PhoneBook::iter = -1;

Contact::Contact()
{
	this->first_name = "";
	this->darkest_secret = "";
	this->nick_name = "";
	this->phone_number = "";
	this->last_name = "";
}

Contact::~Contact()
{
	return;
}

void	PhoneBook::set_contact(Contact new_contact)
{
	++iter;
	if (iter >= 8)
	{
		contacts[0] = new_contact;
		iter = 0;
	}
	else
		contacts[iter] = new_contact; 

}
void	Contact::get_infor()
{
	if (!this->first_name.compare(""))
	{
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	std::cout <<"First Name : " << this->first_name << std::endl;
	std::cout <<"Last Name : "<< this->last_name << std::endl;
	std::cout <<"Nick Name : "<< this->nick_name << std::endl;
	std::cout <<"Phone Number : "<< this->phone_number << std::endl;
	std::cout <<"Darkest Secret : "<< this->darkest_secret << std::endl;
	
}

void	PhoneBook::get_contact()
{
	int	i;

	i = 0;
	for(int i = 0; i < 8; i++)
	{
		contacts[i].get_infos(i);
		std::cout << "\n";
	}
}

void	PhoneBook::get_contact_by_index(int index)
{
	contacts[index].get_infor();
}

void	Contact::addcontact()
{
	while (1)
	{	
		std::cout << "Enter the First name" << std::endl;
		std::getline(std::cin , this->first_name);
		if (!std::cin.good())
				exit (0);
		if (!this->first_name.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Enter the Last name" << std::endl;
		std::getline(std::cin, this->last_name);
		if (!std::cin.good())
				exit (0);
		if (!this->last_name.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Enter NickName" << std::endl;
		std::getline(std::cin, this->nick_name);
		if (!std::cin.good())
				exit (0);
		if (!this->nick_name.empty())
			break ;
		
	}
	while (1)
	{
		std::cout << "Enter Phone_Number" << std::endl;
		std::getline(std::cin, this->phone_number);
		if (!std::cin.good())
				exit (0);
		if (!this->phone_number.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Enter The Darkest Secret" << std::endl;
		std::getline(std::cin, this->darkest_secret);
		if (!std::cin.good())
				exit (0);
		if (!this->darkest_secret.empty())
			break ;				
	}
	return ;
}

void	Contact::get_infos(int iter)
{
	std::cout << "|"<<std::setw(9)  <<iter << "|";
	if (first_name.length() > 10)
		std::cout << std::setw(9) << this->first_name.substr(0, 9)<< "." <<"|";
	else
		std::cout << std::setw(10) << this->first_name <<"|";
	if (last_name.length() > 10)
		std::cout << std::setw(9) << this->last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10)<< this->last_name ;
	if (nick_name.length() > 10)
		std::cout << "|" << std::setw(9) << this->nick_name.substr(0, 9) << "." <<"|";
	else
		std::cout << "|"<< std::setw(10) << this->nick_name  <<"|";
}

static void	search(PhoneBook *Book)
{
	std::cout<< "|  INDEX  |First_NAME|Last_NAME |NICK_NAME |" << std::endl;
	Book->get_contact();
	std::cout << "Enter index to display the contact"<< std::endl;
	std::string index;
	int	number;
	while (1)
	{
		std::getline(std::cin, index);
		if (!std::cin.good())
			exit (0);
		if (index.length() >= 2)
		{
			std::cout << "Enter index to display the contact"<< std::endl;
				continue ;
		}
		else
			number =  index[0] - '0';
		if (number < 8 && number >= 0 )
			break;
		else
			std::cout << "Enter index to display the contact"<< std::endl;
	}		
	Book->get_contact_by_index(number);
}

int main()
{
	std::string command;
	PhoneBook   Book;
	std::cout << "Welcome, Please Enter a command here 's 'ADD' | 'SEARCH' | 'EXIT'" << std::endl;
	while(1)
	{
		std::getline(std::cin, command);
		if (!std::cin.good())
			exit (1);
		if (command == "ADD")
		{
			Contact New;
			New.addcontact();
			Book.set_contact(New);
		}
		else if (command == "SEARCH")
			search(&Book);
		else if (command == "EXIT")
		{
			std::cout << "Have a good day"<<std::endl;
			exit(0);
		}
		else
			std::cout << "Commands availables 'ADD' | 'SEARCH' | 'EXIT'" << std::endl;
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:55:19 by snagat            #+#    #+#             */
/*   Updated: 2022/11/18 11:38:54 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Exc.hpp"
#include <sstream>
#include <iomanip>
#include <cmath>



void	ConVertToChar(double	value)
{
	float	d = static_cast<char> (value);

	if (isnan(value))
		std::cout <<"char :" << "impossible" << std::endl;
	else if (isprint(d))
		std::cout <<"char :" << "'" << static_cast<char> (value) << "'" << std::endl;
	else
		std::cout <<"char :"<< "Non displayable" << std::endl;
}


void	ConVertToInt(double	value)
{
	int	d;

	d = static_cast<int> (value);
	if (isnan(value))
		std::cout << "Int :"<<"Impossible"<< std::endl;
	else
		std::cout <<"int :" << d << std::endl;
}

void	ConVertToFloat(double value)
{
	std::cout << "float :" << static_cast<float> (value)<<"f" << std::endl;
}
void	CheckIng_litteral(std::string str)
{
	std::stringstream	cnvrt;
	Excp				a;
	double				value;
	int					flag = 0;

	size_t	d = 0;
	d = str.find('f');
	if (d != std::string::npos && str.length() != 1)
	{	
		str.erase(str.length() - 1);
	}
	cnvrt << str;
	cnvrt >> value;
	try
	{
		if (str.length() < 1)
			throw a;
		else if (str.length() == 1 && isalpha(str[0]))
		{
			if (!isprint(str[0]))
				throw a;
			flag = 1;
			value = (double)str[0];
			ConVertToChar(value);
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
	if (flag == 0)
		ConVertToChar(value);
	ConVertToInt(value);
	ConVertToFloat(value);
	std::cout << "double: " << value << std::endl;
}



int	main(int ac, char *av[])
{
	if (ac != 2)
		exit(1);
	
	std::cout << std::fixed << std::setprecision(1);
	std::string	str = av[1];
	CheckIng_litteral(str);
	return 0;
}
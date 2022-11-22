/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:52:49 by snagat            #+#    #+#             */
/*   Updated: 2022/11/04 14:18:15 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <vector>

int main(int ac, char **av)
{
	std::string	content[3];
	std::string	line;
	std::string	Arr;
	int	flag;

	flag = 0;
	if (ac != 4)
	{
		std::cout << "invalid  arguments" << std ::endl;
		exit(0);
	}
	for (int i = 0; i < 3 ; i++)
		content[i] = av[i + 1];
	std::ifstream myfile (content[0]);
	if (myfile.is_open())
	{
		int i;
		i = 0;
		
		while(getline(myfile, line))
		{
			Arr.append(line);
			Arr.append("\n");
			i++;
		}
		size_t index;
		index = 0;
		while(1)
		{
			if (content[1].empty())
				break ;
			index = Arr.find(content[1],index);
			if (index == std::string::npos)	
				break ;
			if (!(index == (size_t)-1))
			{
				flag = 1;
				Arr.erase(index, content[1].length());
				Arr.insert(index, content[2], 0,content[2].length());
			}
		}
	}
	else
		std::cout << "file not opened )" << std::endl;
	if (flag == 1)
	{
		std::ofstream	myfile;
		myfile.open(content[0] + ".replace");
		if (!myfile.is_open())
			exit (0);
		for (size_t i = 0; i < Arr.size(); i++)
			myfile << Arr[i];
		myfile.close();
	}
	return 0;
}

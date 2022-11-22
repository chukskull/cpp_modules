/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:09:57 by snagat            #+#    #+#             */
/*   Updated: 2022/11/11 16:53:26 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char *av[])
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return(1);
    }
    for(int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
            std::cout<< (char)std::toupper(av[i][j]);
    }
    std::cout <<'\n';
    return(0);
}

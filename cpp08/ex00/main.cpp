/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:06:37 by snagat            #+#    #+#             */
/*   Updated: 2022/11/21 11:06:38 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "easyfind.hpp"
#include <vector>



int main(){
    std::vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    std::vector<int>::iterator it;
    int k = 2;
    try
    {
        std::cout << easyfind(arr, k) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
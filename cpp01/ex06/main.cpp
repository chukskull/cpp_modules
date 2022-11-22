/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:32:16 by snagat            #+#    #+#             */
/*   Updated: 2022/11/04 19:56:27 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


int main(int ac, char *av[])
{
    (void)ac;
    Harl    go_better_then_cpp;
    go_better_then_cpp.complain(av[1]);
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:59:06 by snagat            #+#    #+#             */
/*   Updated: 2022/11/04 19:49:46 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
	void    debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	notfound( void );
public:
	void	complain(std::string level);
};



#endif
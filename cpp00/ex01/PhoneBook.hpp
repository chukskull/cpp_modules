/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:30:37 by snagat            #+#    #+#             */
/*   Updated: 2022/11/07 14:04:48 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

#include <iostream>

class   PhoneBook
{
private:
	Contact contacts[8];
	static int 	iter;
public:
	void 	set_contact(Contact new_contact);
	void	get_contact();
	void	get_contact_by_index(int index);
};


#endif
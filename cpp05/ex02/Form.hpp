/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:19:15 by snagat            #+#    #+#             */
/*   Updated: 2022/11/15 15:25:58 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

#define UNSIGNED 0
#define SIGNED 1 

# include "Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form(const int grade, std::string name, const int execute);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );
		class	GradeTooHighException :public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException :public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	ExecuteTooLowException :public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	is_signed :public std::exception
		{
			public:
				const char* what() const throw();
		};
		void				setGrade(int grade);
		bool				isSigned() const;
		void				setSigned(bool a);
		void				beSigned(Bureaucrat	const &br);
		virtual	void		execute(Bureaucrat const &exec)const = 0;
		int					getGrade()const;
		int					getExcute()const;
		void				setSigned();
		std::string			getName()const;
	private:
	 	const	std::string	name;
		bool				_signed;
		const int			c_grade;
		const int			c_excute;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
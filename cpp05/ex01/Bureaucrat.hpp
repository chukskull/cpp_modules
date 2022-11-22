/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:13:23 by snagat            #+#    #+#             */
/*   Updated: 2022/11/13 15:02:04 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(const int grade, std::string name);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		std::string	_getName() const;
		int			_getGrade() const;
		void		setGrade(int grade);
		void	_increment();
		void	_decrememt();
		void	signForm(Form &obj);
		// GradeTooHighException;
		// GradeTooLowException;

		Bureaucrat &		operator=( Bureaucrat const & rhs );
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

	private:
		const std::string	name;
		int		grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
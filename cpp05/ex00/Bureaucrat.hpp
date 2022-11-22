#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>


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
		int					grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
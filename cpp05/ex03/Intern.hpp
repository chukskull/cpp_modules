#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Form 	*makeForm(std::string FormName, std::string TargetName);
		Intern &		operator=( Intern const & rhs );
		class	DOESNTEXIST :public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */
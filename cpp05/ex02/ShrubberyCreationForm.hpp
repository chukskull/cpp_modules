#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"

class ShrubberyCreationForm :public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const &exec)const;
		void	_print_tree()const;
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		ShrubberyCreationForm(std::string target);

	private:
		std::string	target;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
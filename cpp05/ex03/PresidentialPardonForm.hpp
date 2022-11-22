#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm :public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		void	execute(Bureaucrat const &exec)const;
		void	_inform()const;
		void	setType(std::string type);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
	private:
		std::string	target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
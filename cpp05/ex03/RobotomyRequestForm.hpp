#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
class RobotomyRequestForm :public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		void	execute(Bureaucrat const &exec)const;
		void	_bruits()const;
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		RobotomyRequestForm(std::string target);

		void	beSigned(Bureaucrat const &br);

	private:
		std::string	target;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
#include "RobotomyRequestForm.hpp"
# include <ctime>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm():Form(72, "RobotomyRequestForm",45), target("defualt")
{
	std::cout<< "Default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):Form(src), target(src.target)
{
	std::cout << "Copy Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):target(target)
{
	std::cout<< "Default constructor" << std::endl;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default Destructor"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setSigned(rhs.isSigned());
		this->target = rhs.target;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "_name=" <<  i.getName()<<std::endl;
	o << "_grade= " << i.getGrade()<<std::endl;
	o << "_excute grade = " << i.getExcute()<<std::endl;
	o <<"_signed grade= " << i.isSigned()<<std::endl;
	return o;
}

void	RobotomyRequestForm::_bruits()const
{
	if (time(NULL) % 2 == 0)
		std::cout << this->target << "a été robotomisée"<<std::endl;
	else
		std::cout << this->target << "a été échoué"<<std::endl;
}



void	RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
	is_signed				b;
	ExecuteTooLowException	a;

	if (this->isSigned()  == false)
	{
		throw b;
	}
	if (executor._getGrade() > this->getExcute())
	{
		throw a;
	}
		this->_bruits();
}
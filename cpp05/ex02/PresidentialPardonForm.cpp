#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm():Form(25, "PresidentialPardonForm",5), target("defualt")
{
	std::cout<< "Default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):target(target)
{
	std::cout<< "Default constructor" << std::endl;
}



PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):Form(src), target(src.target)
{
	std::cout << "Copy Constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default Destructor"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setSigned(rhs.isSigned());
		this->target = rhs.target;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "_name=" <<  i.getName()<<std::endl;
	o << "_grade= " << i.getGrade()<<std::endl;
	o << "_excute grade = " << i.getExcute()<<std::endl;
	o <<"_signed grade= " << i.isSigned()<<std::endl;
	return o;
}


void	PresidentialPardonForm::_inform()const
{
	std::cout << this->target << " a été pardonnée par Zaphod Beeblebrox." <<std::endl;
}

void	PresidentialPardonForm::setType(std::string type)
{
	this->target = type;
}
void	PresidentialPardonForm::execute(Bureaucrat const &executor)const
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
	else
	{
		this->_inform();
		std::cout << executor._getName() <<  " execute " << this->getName()<<std::endl;
	}
}
#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern( const Intern & src )
{
	(void)src;
	std::cout << "Copy Intern Constructor" <<std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Desctructor Intern called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


const char*	Intern::DOESNTEXIST:: what() const throw()
{
	return "Form doesnt exist";
}

Form	*Intern::makeForm(std::string name, std::string type)
{
	int i;
	DOESNTEXIST a;

	i = 0;
	std::string arr[] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreationForm"};
	while (arr[i].compare(name) && i < 3)
	{
		i++;

	}
	switch (i)
	{
	case 0:
		return(new PresidentialPardonForm(type));
		break;
	case 1:
		return(new RobotomyRequestForm(type));
		break ;
	case 2:
		return(new ShrubberyCreationForm(type));
		break ;
	default:
		throw a;
		break;
	}
}
/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
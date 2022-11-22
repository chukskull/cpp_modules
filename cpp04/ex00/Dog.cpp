#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog():Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "CopyConstructor Dog called" << std::endl;
	this->type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.geType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Type = " << i.geType();
	return o;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
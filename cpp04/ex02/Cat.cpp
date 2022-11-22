#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): Animal("Cat"),brain(new Brain)
{
	std::cout << "Default Cats constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat & src )
{
	std::cout << "CopyConstructor Cats called" << std::endl;
	this->type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Destructor Cats called" << std::endl;
	delete this->brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.geType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Cat::makeSound(void)const
{
	std::cout << "Cats dont Bark !!" << std ::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Type = " << i.geType();
	return o;
}

/* ************************************************************************** */
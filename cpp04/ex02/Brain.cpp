#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "CopyConstructor Brain called" << std::endl;
	for(int	i = 0; i < 99; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int	i = 0; i < 99; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Brain const & i )
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
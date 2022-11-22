#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>


class Base
{

	public:
		virtual ~Base();
	private:

};
Base	*generate(void);
void	identify(Base &pb);
void	identify(Base *pb);

#endif /* ************************************************************ BASE_H */
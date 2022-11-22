#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base()
{
}


Base	*generate(void)
{
	A	*a = new A;
	B	*b = new B;
	C	*c = new C;

	srand(time(NULL));
	int rand_ = (rand() % 3);
	switch (rand_)
	{
	case 0:
		delete b;
		delete c;
		return dynamic_cast<Base *>(a);
	case 1:
		delete a;
		delete c;
		return dynamic_cast<Base *>(b);
	case 2:
		delete a;
		delete	b;
		return dynamic_cast<Base *>(c);
	default:
		return (NULL);
	}	
}

void	identify(Base *pb)
{
	A	* dp1 = dynamic_cast<A *> (pb);
	if (dp1 != nullptr)
	{
		std::cout << "Class A"<< std::endl;
		return ;
	}
	B *dp2 = dynamic_cast<B *> (pb);
	if (dp2 != nullptr)
	{
		std::cout << "Class B "<< std::endl;
		return ;
	}
	C *dp3 = dynamic_cast<C *> (pb);
	if (dp3 != nullptr)
	{
		std::cout << "Class C "<< std::endl;
		return ;
	}
}

void	identify(Base &pb)
{
	int arr[] = {1,1,1};
	std::string str[3] = {"Class A", "Class B", "Class C"}; 
	try
	{
		A	& dp1 = dynamic_cast<A &> (pb);
		(void)dp1;
	}
	catch(const std::exception& e)
	{
		arr[0] = 0;
	}
	
	try
	{
		B &dp2 = dynamic_cast<B &> (pb);
		(void)dp2;
	}
	catch(const std::exception& e)
	{
		arr[1] = 0;
	}

	try
	{
		C &dp3 = dynamic_cast<C &> (pb);
		(void)dp3;
	}
	catch(const std::exception& e)
	{
		arr[2] = 0;
	}
	for (int i =0; i < 3; i++)
	{
		if (arr[i])
			std::cout << str[i] << std::endl;
	}
}
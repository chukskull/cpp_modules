#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, class container= std::deque<T> >
class MutantStack :public std::stack<T>
{
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(MutantStack const &stack){
                *this = stack;
        }
        MutantStack &operator=(MutantStack const &rhs)
        {
            if (this != &rhs)
            {
                *this = rhs;
            }
        }
        typedef typename container::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

#endif
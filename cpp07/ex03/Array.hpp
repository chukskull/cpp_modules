#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template  <class T>

class Array
{
	public:

	class Excp :public std::exception
	{
    public:
		const char* what() const throw()
		{
			return "index out of bounds";
		}
	};

		Array();
		Array( Array const & src );
		~Array();
		size_t	Size() const;
		Array(unsigned int array_size);
		Array &		operator=( Array const & rhs );
		T	&operator[](size_t index);

	private:
		T *array;
		unsigned	int array_size;
};

template <class T>
Array<T>::Array():array(0), array_size(0)
{
}

template <class T>
size_t	Array<T>::Size() const
{
	return (this->array_size);
}

template <class T>
Array<T>::Array(unsigned int r):array_size(r)
{
	this->array = new T [array_size];
	if (!this->array)
		this->array = 0;
}

template <class T>
Array<T>::Array(Array<T> const &src)
{
	this->array = NULL;
	(*this) = src;
}

template <class T>
Array<T> &				Array<T>::operator=(Array<T> const & rhs )
{
	if (this != &rhs)
	{
		if (this->array)
			delete [] this->array;
		T *newarray = new T [rhs.Size()];
		for (size_t i = 0; i < rhs.Size(); i++)
		{
			newarray[i] = rhs.array[i];
		}
		this->array = newarray;
		this->array_size = rhs.array_size;
	}
	return *this;
}

template <class T>
T	&Array<T>::operator[](size_t index)
{
	Excp	a;

	if (index >= this->Size())
		throw a;
	return this->array[index];
}

template <class T>
Array<T>::~Array()
{
	delete [] this->array;
}

#endif /* *********************************************************** ARRAY_H */
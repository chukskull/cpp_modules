#include    "serial.hpp"
#include    <iostream>




Data::Data()
{
    return;
}

Data::~Data()
{
    return ;
}
char	Data::_get_char()
{
    return  this->_char;
}

double	Data::_get_double()
{
   return   this->_double; 
}

float	Data::_get_float()
{
    return  this->_float;
}

int		Data::_get_int()
{
    return  this->_integer;
}

void	Data::_set_char(char c)
{
    this->_char = c;
}
void	Data::_set_double(double d)
{
    this->_double = d;
}
void	Data::_set_float(float f)
{
    this->_float = f;
}
void	Data::_set_int(int u)
{
    this->_integer = u;
}
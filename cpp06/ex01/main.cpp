#include <stdio.h>
#include "serial.hpp"


int main(void){

    Data *ptr = new Data;
   
    ptr->_set_char('c');
    ptr->_set_int(69);
    ptr->_set_double(69.69999999);
    ptr->_set_float(69.699);

    std::cout << ptr->_get_char() << std::endl;
    std::cout << ptr->_get_int() << std::endl;
    std::cout << ptr->_get_double() << std::endl;
    std::cout << ptr->_get_float() << std::endl;
    std::cout << "-------------" << std::endl;

    uintptr_t p = serialize(ptr);
    Data *r = deserialize(p);

    std::cout << r->_get_char() << std::endl;
    std::cout << r->_get_int() << std::endl;
    std::cout << r->_get_double() << std::endl;
    std::cout << r->_get_float() << std::endl;

    return 0;
}
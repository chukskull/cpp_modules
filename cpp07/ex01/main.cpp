#include "iter.hpp"

#include <iostream>


void    zid(int *ptr)
{
    (*ptr += 1);
}

void    print(int *i)
{
    std::cout << *i << std::endl;
}

void    totr(char *c)
{
   * c = toupper(*c);
}

void    prints(char *c)
{
    std::cout << *c << std::endl;
}

int main(void)
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};

   iter(arr, sizeof(arr)/sizeof(int), zid);

   iter(arr, sizeof(arr)/sizeof(int), print);
   std::string  ybncl = "Mercury";

   iter((char *)ybncl.c_str() ,ybncl.length(), totr);
   iter((char *)ybncl.c_str() ,ybncl.length(), prints);
   
}
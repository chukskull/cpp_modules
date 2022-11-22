#include "Span.hpp"
#include <iostream>


int main()
{
    // Span sp = Span(10);
    // try
    // {
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(20);
    //     sp.addNumber(90);
    //     sp.addNumber(67);
    //     sp.addNumber(88);
    //     sp.addNumber(9);
    //     sp.addNumber(12);
    //     sp.addNumber(19);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    Span ayman = Span(1000000);
    ayman.fillarr();
    std::cout << ayman.shortestSpan() << std::endl;
    std::cout << ayman.longestSpan() << std::endl;
    return 0;
}
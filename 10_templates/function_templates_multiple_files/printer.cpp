#include <iostream>
#include <string>
#include "printer.hpp"

template <typename T>
void print(T input)
{
    std::cout << input << std::endl;
}

// explicitely instantiate all types here!
template void print(int);
template void print(float);
template void print(double);
template void print(char);
template void print(std::string);
template void print<char const*>(char const*); // string literal

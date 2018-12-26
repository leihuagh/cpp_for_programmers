#include <iostream>
#include <string>
#include "printer.hpp"




int main(int argc, char const *argv[])
{
    print(7);
    print('g');
    print(12.56);
    std::string s = "some stuff";
    print(s);
    print("some stuffs");
    return 0;
}


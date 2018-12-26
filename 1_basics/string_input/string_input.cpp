#include <iostream>
#include <string> // std::string
#include <sstream> // stringstream.
using namespace std;

int main()
{
    // METHOD 1: create a string using the '=' operator
    std::string name1 = "Tyler";

    // METHOD 2: create a string using the constructor
    std::string name2("Rachel");

    // create a copy of an existing string
    std::string name3 (name2);
    std::cout << (name3 == name2) << std::endl; // evaluates to true
    std::cout << (&name2 == &name3) << std::endl;// evaluates to false



    // comparing size, length, capacity and max_size
    std::string str ("Test string");
    std::cout << "size: " << str.size() << "\n";
    std::cout << "length: " << str.length() << "\n";
    std::cout << "capacity: " << str.capacity() << "\n";
    std::cout << "max_size: " << str.max_size() << "\n";


    // // pause terminal
    // string junk;
    // getline(cin, junk);
    return 0;
}

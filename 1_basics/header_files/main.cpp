#include <iostream>
#include <string>
#include "hello.hpp"
using namespace std;

int main()
{
    string name = "Rachel";
    say_hello(name);
    cout << "works" << endl;

    string junk;
    getline(cin, junk);
    return 0;
}


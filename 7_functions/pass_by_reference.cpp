#include <iostream>
using namespace std;

// This function is PASS BY REFERENCE
void increment(int& input); //Note the addition of '&'

int main()
{
    int a = 34;
    cout << "Before the function call a = " << a << endl;
    increment(a);
    cout << "After the function call  a = " << a << endl;
    return 0;
}


void increment(int& input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    cout << "In the function call     a = " << input << endl;
}

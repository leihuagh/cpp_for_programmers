#include <iostream>
using namespace std;

int main()
{
    // Declare some variables
    double my_double = 5.25;
    int my_int = 3;

    cout << "my_double                  = " << my_double << endl;
    cout << "size in bytes              = " << sizeof(my_double) << endl;
    cout << "my_double casted to an int = " << (int)my_double << endl;
    cout << "size in bytes              = " << sizeof((int)my_double) << endl;
    cout << endl;


    cout << "my_int                    = " << my_int << endl;
    cout << "my_int casted to a double = " << (double)my_int << endl;
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Create a variable 'a'
    int a = 5;
    int* a_ptr = &a;

    cout << "a     = " << a << endl;
    cout << "a_ptr = " << a_ptr << endl;
    cout << "&a    = " << &a << endl;
    cout << endl;

    // De-reference
    int a_ptr_value = *a_ptr;
    cout << "a_ptr is pointing at: " << a_ptr_value << endl;
    cout << "a_ptr is pointing at: " << *a_ptr << endl;


    //cin.get();
    return 0;
}

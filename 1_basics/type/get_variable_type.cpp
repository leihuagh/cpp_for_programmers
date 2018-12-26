#include <iostream>
#include <string>
using namespace std;

int main()
{
    // char
    char my_char = 'a';
    cout << "my_char = " << my_char << endl;
    cout << "type    = " << typeid(my_char).name() << endl;
    cout << "size    = " << sizeof(my_char) << " byte" << endl;
    cout << endl;

    // bool
    bool my_bool = 0;
    cout << "my_bool = " << my_bool << endl;
    cout << "type    = " << typeid(my_bool).name() << endl;
    cout << "size    = " << sizeof(my_bool) << " byte" << endl;
    cout << endl;

    // int
    int my_int = 1;
    cout << "my_int = " << my_int << endl;
    cout << "type    = " << typeid(my_int).name() << endl;
    cout << "size    = " << sizeof(my_int) << " bytes" << endl;
    cout << endl;

    // const int
    const int my_const_int = 2;
    cout << "my_constshort = " << my_const_int << endl;
    cout << "type    = " << typeid(my_const_int).name() << endl;
    cout << "size    = " << sizeof(my_const_int) << " bytes" << endl;
    cout << endl;

    // short
    short my_short = 3;
    cout << "my_short = " << my_short << endl;
    cout << "type    = " << typeid(my_short).name() << endl;
    cout << "size    = " << sizeof(my_short) << " bytes" << endl;
    cout << endl;

    // long
    long my_long = 4;
    cout << "my_long = " << my_long << endl;
    cout << "type    = " << typeid(my_long).name() << endl;
    cout << "size    = " << sizeof(my_long) << " bytes" << endl;
    cout << endl;

    // long long
    long long my_long_long = 5;
    cout << "my_long_long = " << my_long_long << endl;
    cout << "type    = " << typeid(my_long_long).name() << endl;
    cout << "size    = " << sizeof(my_long_long) << " bytes" << endl;
    cout << endl;

    // float
    float my_float = 3.14;
    cout << "my_float = " << my_float << endl;
    cout << "type    = " << typeid(my_float).name() << endl;
    cout << "size    = " << sizeof(my_float) << " bytes" << endl;
    cout << endl;

    // double
    double my_double = 3.141;
    cout << "my_double = " << my_double << endl;
    cout << "type    = " << typeid(my_double).name() << endl;
    cout << "size    = " << sizeof(my_double) << " bytes" << endl;
    cout << endl;

    // string
    string my_string = "hello";
    cout << "my_string = " << my_string << endl;
    cout << "type    = " << typeid(my_string).name() << endl;
    cout << "size    = " << sizeof(my_string) << " bytes" << endl;
    cout << endl;

    // string array
    string my_string_array[] = {"False", "True"};
    cout << "my_string_array = " << my_string_array << endl;
    cout << "type    = " << typeid(my_string_array).name() << endl;
    cout << "size    = " << sizeof(my_string_array) << " bytes" << endl;
    cout << endl;

    cin.get();
    return 0;


}

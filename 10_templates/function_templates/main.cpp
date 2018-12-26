#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// prototypes

// create a templated (works with generic data types 'T') 'find_smaller()' function that will return the smaller of two values
template <typename T> // NOTE: no semicolen! could also use: template <class T>
T find_smaller(T input1, T input2);





// main
int main(int argc, char const *argv[])
{
    int i1 = 54;
    int i2 = 89;
    float f1 = 1.0;
    float f2 = 121.0;
    char c1 = 'a';
    char c2 = 'z';
    string s1 = "Hello";
    string s2 = "Helloo";


    //Wow! We can use one function for different variable types
    cout<<"Integers compared: "<<find_smaller(i1, i2);
    cout<<"\nFloats compared: "<<find_smaller(f1,f2);
    cout<<"\nChars compared: "<<find_smaller(c1,c2);
    cout<<"\nStrings compared: "<<find_smaller(s1,s2)<<endl;


    return 0;
}







// definitions
template <typename T>
T find_smaller(T input1, T input2)
{
    if(input1 < input2)
    {
        return input1;
    }
    else
    {
        return input2;
    }
}

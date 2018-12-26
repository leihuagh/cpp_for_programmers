/* https://www.youtube.com/watch?v=-_uSj6lrmZ0&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=10 */

#include <iostream>
using std::cout;
using std::endl;


// Calf
struct Calf
{
    int age;

    // default compiler generated copy constructor
    Calf(const Calf& original)
    {
        calf = original.calf;
    }
};


// Cow
struct Cow
{
    int numSpots;
    Calf* calf;

    // constructor
    Cow()
    {
        calf = new Calf;
    };

    // create our own copy constructor
    Cow(const Cow& original)
    {
        numSpots = original.numSpots;
        // calf = original.calf; // ...this is no better than the default copy constructor (same issues)
        calf = new Calf(*original.calf); // this is a deep copy
    }

    // destructor
    ~Cow()
    {
        delete calf;
    };

};


// main
int main(int argc, char const *argv[])
{
    Cow betsy;
    {
        Cow george(betsy);
    }
    cout << "leaving main" << endl;
    return 0;
}


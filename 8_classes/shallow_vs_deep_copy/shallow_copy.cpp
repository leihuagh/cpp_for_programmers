/*

DEEP COPY - All members of the original are cloned.  There are no 'shared' copies.

SHALLOW COPY - Some members of the original may reference the same object as the original.

*/
#include <iostream>
using std::cout;
using std::endl;

struct Cow
{
    int numSteaks;
    int numLegs;
};


int main()
{
    Cow betsy;
    betsy.numSteaks = 100;
    betsy.numLegs = 4;

    cout << betsy.numSteaks << endl;
    cout << betsy.numLegs << endl;



    return 0;
}

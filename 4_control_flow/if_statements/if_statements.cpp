#include <iostream>
#include <string>
using namespace std;


// If it is raining outside, put on a coat.
// If it is colder than 60 degrees, put on a coat.
// Otherwise, you don't need a coat.
int main()
{
    bool is_raining = 1;  // is it raining outside?
    short temp      = 32; // temperature in degrees F

    if(is_raining) {
        cout << "It is raining; put on a coat!" << endl;
    }
    else if(temp < 60) {
        cout << "It is cold outside; put on a coat!" << endl;
    }
    else {
        cout << "You don't need a coat." << endl;
    }

    cin.get();
    return 0;
}

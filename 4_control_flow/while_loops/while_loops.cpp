#include <iostream>
using namespace std;


// Add numbers to i and print them out until we reach 10
int main()
{
    int stop_num = 10;

    int i = 0;
    while(i <= stop_num)
    {
        cout << "i = " << i << endl;
        i++;
    }

    return 0;
}

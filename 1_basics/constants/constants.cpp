/*Goal: use constant variables*/

#include <iostream>
using namespace std;

int main()
{
    const int weightGoal = 100;
    cout<<"WeightGoal = "<<weightGoal<<"\n";

    // ...observe the error that occurs when we try to assign a new value to a const variable
    weightGoal = 200;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    return 0;
}

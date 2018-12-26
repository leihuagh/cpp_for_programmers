#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';
    cout << "You got a grade of " << grade << " which means your score was between ";

    switch(grade)
    {
        case 'A':
            cout << "90 and 100 points." << endl;
            break;// <-- break is optional. (if ommitted, all following case statements will be executed until a 'break' regardless of truth value)
        case 'B':
            cout << "80 and 90 points." << endl;
            break;
        case 'C':
            cout << "70 and 80 points." << endl;
            break;
        case 'D':
            cout << "60 and 70 points." << endl;
            break;
        case 'F':
            cout << "0 and 60 points." << endl;
            break;
        default: // <-- default case is optional.
            cout << "...you did not take the test." << endl;
    }

    return 0;
}

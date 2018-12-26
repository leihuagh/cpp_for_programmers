#include <iostream>
#include <string>
using namespace std;

/*

6 Rational Operators:

    EQUAL:                        ==
    NOT EQUAL:                    !=
    GREATER THAN:                 >
    GREATER THAN OR EQUAL TO:     >=
    LESS THAN:                    <
    LESS THAN OR EQUAL TO:        <=


3 Logic Operators:

    AND:                          &&
    OR:                           ||
    NOT:                          !


2 Boolean Values:

    TRUE:                         1
    FALSE:                        0

*/


int main()
{
    bool A = 1;
    bool B = 1;
    bool C = 0;
    bool D = 0;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    cout << "D = " << D << endl;

    // Create a string array to hold True and False strings
    string TorF[] = {"False", "True"};

    //The && operator
    cout << endl;
    cout<<"A == C is "<<TorF[A==C];
    cout<<"\n(B == D) is "<<TorF[B==D];
    cout<<"\n(B > D) is "<<TorF[B>D];
    //A true && false = false
    cout<<"\n\n(A ==C) && (B == D) is "<<TorF[(A ==C) && (B == D)];
    //A true and true = true
    cout<<"\n(A ==C) && (B > D) is "<<TorF[(A ==C) && (B > D)];

    //The || operator
    //A true || false = true
    cout<<"\n\n(A ==C) || (B == D) is "<<TorF[(A ==C) || (B == D)];
    //A true || true = true
    cout<<"\n(A ==C) || (B > D) is "<<TorF[(A ==C) || (B > D)];

    //The 'Not' operator
    cout<<"\n\nA < B is "<<TorF[A<B];
    cout<<"\n!(A < B) is "<<TorF[!(A<B)];

    cout<<"\n\nA == C is "<<TorF[A==C];
    cout<<"\n!(A == C) is "<<TorF[!(A==C)];

    cin.get();
    return 0;
}

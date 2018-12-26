#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl << endl;


    // Addition
    cout << "a + b = " << a + b << endl;

    // Subtraction
    cout << "a - b = " << a - b << endl;

    // Multiplication
    cout << "a * b = " << a * b << endl;

    // Division
    cout << "a / b = " << a / b << "   ... note that / truncates remainder of int division" << endl;

    // Modulo
    cout << "a % b = " << a % b << "   ... a modulus b gives remainder of a divided by b" << endl;
    cout << endl;

    // other usefull math functions provided by <cmath> library (must #incldude <cmath>)
    cout << "Usefull math operations provided by <cmath> library:" << endl << endl;

    // Power
    cout << "a^b = std::pow(a, b) = " << std::pow(a,b) << endl;

    // pi
    cout << "M_PI = pi = " << M_PI << endl;

    // e
    cout << "exp(1) = e^1 = " << exp(1) << endl;

    // sin, cos, tan
    cout << "sin(pi/4) = " << sin(M_PI/4) << endl;
    cout << "cos(pi/4) = " << cos(M_PI/4) << endl;
    cout << "tan(pi/4) = " << tan(M_PI/4) << endl;


    cin.get();
    return 0;
}

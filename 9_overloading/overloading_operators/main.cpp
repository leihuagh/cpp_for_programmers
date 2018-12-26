#include <iostream>
using std::cout;
using std::endl;

// int add(int left, int right)
// {
//     return left + right;
// }

struct Vector
{
    int x;
    int y;
};

// Overload the '+' operator so it works with our custom Vector struct
Vector operator+(const Vector& left, const Vector& right)
{
    Vector ret;
    ret.x = left.x + right.x;
    ret.y = left.y + right.y;
    return ret;
}










int main(int argc, char const *argv[])
{
    // int a = 43;
    // int b = 4398;

    // int result1 = a + b;
    // int result2 = add(a, b);

    // cout << result1 << endl;
    // cout << result2 << endl;

    /*-------------------------------------------------*/

    // METHOD 1: without overloading '+', it gets kind of clunky.
    Vector v1;
    Vector v2;

    v1.x = 2;
    v1.y = 3;

    v2.x = 1;
    v2.y = 4;

    Vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    cout << result.x << " " << result.y << endl; // 3 7

    // METHOD 2: use the overloaded '+' operator
    result = v1 + v2;
    cout << result.x << " " << result.y << endl;


    return 0;
}

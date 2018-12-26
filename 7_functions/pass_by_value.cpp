#include <iostream>
using namespace std;

// Prototype the 'rect_area' function
int rect_area(int l, int w);


// Use the 'main' function to call the 'rect_area' function
int main()
{
    int l = 5;
    int w = 10;
    int area;

    area = rect_area(l, w);
    cout << "The area of the rectangle is " << area << " square units" << endl;
    return 0;

}

// Define the 'rect_area' function
int rect_area(int l, int w)
{
    return l * w;
}

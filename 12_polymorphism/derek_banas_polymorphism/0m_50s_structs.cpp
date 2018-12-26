#include <iostream>

// create a 'Shape' base struct
struct Shape {
public: // struct's members are public by default
    double length, width;

    Shape(double length_in=1, double width_in=1)
    {
        length = length_in;
        width = width_in;
    }

    double Area()
    {
        return length * width;
    }

private:
    int id;
};


struct Circle : Shape
{
    Circle(double width)
    {

    }
}








// main
int int main(int argc, char const *argv[])
{


    return 0;
}

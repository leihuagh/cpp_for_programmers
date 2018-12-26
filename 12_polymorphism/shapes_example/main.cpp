/* https://www.youtube.com/watch?v=bP-Trkf8hNA */
#include <iostream>
using std::cout;
using std::endl;


class Rectangle
{
private:
    float width;
    float height;

public:
    // constructor
    //Rectangle(float width_in, float height_in) : width(width_in), height(height_in){} // ': width(w...' initializes the class member variable 'width' with the argument 'width' that is passed into the constructor.
    Rectangle(float width_in, float height_in)
    {
        width = width_in;
        height = height_in;
    }

    float getArea() const
    {
        return height * width;
    }

    /* NOTE
    A "const function", denoted with the keyword
    const after a function declaration, makes it
    a compiler error for this class function to
    change a member variable of the class. However,
    reading of a class variables is okay inside of
    the function, but writing inside of this
    function will generate a compiler error
    */

};



int main(int argc, char const *argv[])
{
    Rectangle r(2, 6);
    cout << r.getArea() << endl;
    return 0;
}

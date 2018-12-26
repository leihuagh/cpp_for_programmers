#include <iostream>
#include <string>
using std::cout;
using std::endl;


// class declaration
template <class T>
class Student
{
private:
    T id;
public:
    Student(T id_in=0000);
    ~Student();
    void set_id(T id_in);
    T get_id() const;
};



// main
int main()
{
    Student<int> rachel(1234);
    Student<float> tyler(3.141);

    cout << rachel.get_id() << endl;
    rachel.set_id(6667);
    cout << rachel.get_id() << endl;


    return 0;
}



// class definition

// constructors
template <class T>
Student<T>::Student(T id_in)
{
    id = id_in;
}

template <class T>
Student<T>::~Student()
{
    ; // do nothing
}

template <class T>
void Student<T>::set_id(T id_in)
{
    id = id_in;
}

template <class T>
T Student<T>::get_id() const
{
    return id;
}


/*

A "const function", denoted with the keyword
const after a function declaration, makes it
a compiler error for this class function to
change a member variable of the class. However,
reading of a class variables is okay inside of
the function, but writing inside of this
function will generate a compiler error).

Non-member functions, functions not a member
of a class, can not be "const functions"s.

*/

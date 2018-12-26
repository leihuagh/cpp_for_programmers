#include <iostream>
#include <string>
using namespace std;


// class definition
class Student
{
private:
    string name;
    int id;
    int grad_date;

public:
    // constructor
    Student(string name_in, int id_in, int grad_date_in=2017);

    // destructor
    ~Student();

    // setter functions
    void set_name(string name_in);
    void set_id(int id_in);
    void set_grad_date(int grad_date_in);

    // getter functions
    string get_name();
    int get_id();
    int get_grad_date();

    // helper functions
    void print();
};


// main
int main()
{
    Student student1("Ty", 3);
    student1.print();


    return 0;
}


// constructor
Student::Student(string name_in, int id_in, int grad_date_in)
{
    cout<<"Assigning inital values in the constructor\n";
    name = name_in;
    id = id_in; //the initial value of the breed
    grad_date = grad_date_in; //the initial value of the age
}

// destructor
Student::~Student()
{
    cout << "Destructor has been called\n";
}


// setters
void Student::set_name(string name_in)
{
     name = name_in;
}

void Student::set_id(int id_in)
{
     id = id_in;
}

void Student::set_grad_date(int grad_date_in)
{
     grad_date = grad_date_in;
}


// getters
string Student::get_name()
{
     return name;
}

int Student::get_id()
{
     return id;
}

int Student::get_grad_date()
{
     return grad_date;
}


// helpers
void Student::print()
{
     cout << name << " " << id << " " << grad_date << endl;
}

#include <iostream>
#include <string>
#include "student_class.hpp"

// constructor
Student::Student(string name_in, int id_in, int grad_date_in)
{
    cout<<"Assigning inital values in the constructor\n";
    name = name_in;
    id = id_in;
    grad_date = grad_date_in;
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

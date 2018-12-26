#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H
#include <string>
#include "student.hpp"

// Derived class (GradStudent 'inherits' from 'Student')
/*
The access control before the base class (in this case 'public') determines the access of the inherited class.

There are three types of access control: public, private, and protected.

Public Inheritance means all public members of the base class are accessible to the derived class
Private Inheritance means all members of the base class are private to the derived class
Protected Inheritance means all members of the base class are protected to the derived class.
It is very rare to have a protected or private inheritance, the vast majority of the time inheritance is public.
*/

class GradStudent : public Student
{
private:
    std::string degree;
public:
    GradStudent();
    void setDegree(std::string degreeIn);
    std::string getDegree();
};

#endif

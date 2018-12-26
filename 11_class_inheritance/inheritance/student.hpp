#ifndef STUDENT_H
#define STUDENT_H
// Base class
#include <string>
class Student
{
private:
    int id;
public:
    void setId(int idIn);
    int getId();
    Student();
};
#endif

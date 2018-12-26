// #ifndef STUDENT_H
// #define STUDENT_H

// template <class T> //tell compiler this class uses a generic value
// class StudentRecord
// {
// private:
//     const int size = 5;
//     T grade;
//     int studentId;
// public:
//     StudentRecord(T input);
//     void setId(int idIn);
//     void printGrades();
// };

// #endif

//header file for main.cpp

#include<iostream>

//The class accepts strings,
//so we need to use namespace
using namespace std;

//tell compiler this class uses a generic value
template <class T>
class StudentRecord
{
    private:
        const int size = 5;
        T grade;
        int studentId;
    public:
        StudentRecord(T input);
        void setId(int idIn);
        void printGrades();
};


#include <iostream>
#include <string>
#include "student.hpp"

template<class T>
StudentRecord<T>::StudentRecord(T input)
{
    grade=input;
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    std::cout<<"ID# "<<studentId<<": ";
    std::cout<<grade<<"\n ";
    std::cout<<"\n";
}



/*
Template functions, including member functions,
must be written entirely in the header files.
This means that if you have a template class,
its implementation must be entirely in a header file.
This is because the compiler needs to have access
to the entire template definition (not just the
signature) in order to generate code for each
instantiation of the template.
*/
// ... so add every instantiation that you will need (add them below in this .cpp implementation file)
template class StudentRecord<int>;
template class StudentRecord<char>;
template class StudentRecord<float>;

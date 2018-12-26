#include <string>
#include "gradstudent.hpp"

GradStudent::GradStudent()
{
    degree = "undeclared";
}

void GradStudent::setDegree(std::string degreeIn)
{
    degree = degreeIn;
}

std::string GradStudent::getDegree()
{
    return degree;
}

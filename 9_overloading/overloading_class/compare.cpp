#include <iostream>
#include "compare.hpp"


int Compare::findSmaller(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

float Compare::findSmaller(float a, float b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

char Compare::findSmaller(char a, char b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

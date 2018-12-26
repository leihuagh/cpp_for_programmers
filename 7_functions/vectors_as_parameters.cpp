#include <iostream>
#include <vector>

// prototypes
std::vector<int> pass_by_value(std::vector<int> v); // original vector remains unchanged, copy made
void pass_by_reference(std::vector<int>& v); // original vector changed, no copy made
void print_vector(const std::vector<int> v);


// main
int main()
{
    // create a vector 'a'
    std::vector<int> a = {1,2,3};
    print_vector(a);

    // before pass_by_value
    print_vector(a);

    // after pass_by_value
    pass_by_value(a);
    print_vector(a);


    // before pass_by_reference
    print_vector(a);

    // after pass_by_reference
    pass_by_reference(a); // <-- NOTE: Don't need the & when calling function
    print_vector(a);

    // pass_by_value again and set 'a' to returned 'v'
    a = pass_by_value(a);
    print_vector(a);

}



// function definitions
std::vector<int> pass_by_value(std::vector<int> v)
{
    v.push_back(999);
    return v;
}


void pass_by_reference(std::vector<int>& v)
{
    v.push_back(888);
}


void print_vector(const std::vector<int> v)
{
    // print out all elements in the vector, except for the last element
    std::cout << "{";
    for(auto itr = v.begin(); itr < (v.end() - 1); itr++) // ...or, for C++11 and newer, use: auto itr;
    {
        std::cout << *itr << ", ";
    }
    std::cout << *(v.end()-1) << "}" << std::endl;
}

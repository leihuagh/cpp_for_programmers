#include <iostream>
#include <vector>
#include "Eigen/Dense"

using namespace std;
using namespace Eigen;

// Function prototypes
void print_vector(vector<float> &v);
void print_vector_2(vector<float> &v);


int main()
{
    // Create a standard vector
    vector<float> vec;
    vec.push_back(10.0);
    vec.push_back(20.0);
    vec.push_back(30.0);
    // Print out all elements in the vector
    print_vector(vec);

    // Create an Eigen vector
    VectorXd vec2(5);
    vec2 << 11,12,13,14,15;

    cout << vec2;



    return 0;
}


// Function definitions
void print_vector(vector<float> &v)
{
    // Create a vector iterator "itr"
    vector<float>::iterator itr;
    // Print out all elements of the vector "v"
    for(itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << ' ';
    }
    cout << endl;
}


void print_vector_2(vector<float> &v)
{
    // Create a vector iterator "itr"
    vector<float>::iterator itr;
    // Print out all elements of the vector "v"
    for(itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << ' ';
    }
    cout << endl;
}

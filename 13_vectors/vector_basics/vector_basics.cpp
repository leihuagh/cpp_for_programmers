#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vect);

int main()
{
    /* Format:

        vector<T> my_vector; <-- Creates an empty vector that holds values of type "T"

    Vector Methods:

        my_vector.size()                               --> returns the number of elements stored in the vector
        my_vector.at(idx)                              --> returns the element at index "idx"

        my_vector.push_back(item)                      --> adds an item to the END (right) of the vector and resizes the vector
        my_vector.insert(my_vector.begin(), new_value) --> adds an item the the BEGINNING (left) of the vector and resizes the vector
        my_vector.insert(my_vector.begin() + integer, new_value) --> adds new_value BEFORE (left of) specified index

        my_vector.erase(my_vector.begin()) --> removes item from the BEGINNING (left) of the list








    // Create a vector of ints
    vector<int> my_vector;

    // Print out all the elements in the vector
    print(my_vector);

    // View the vector's size
    cout << "my_vector.size() = " << my_vector.size() << endl;

    // Add elements to the END (right side) of the vector (and resizes the vector)
    my_vector.push_back(10);
    my_vector.push_back(20);
    my_vector.push_back(30);
    print(my_vector);
    cout << "my_vector.size() = " << my_vector.size() << endl;




    return 0;
}



// Print out all the elements in the vector
void print(vector<int> v)
{
    cout << "[ ";
    for(int i=0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

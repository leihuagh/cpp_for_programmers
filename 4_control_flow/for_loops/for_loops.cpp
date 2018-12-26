#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Create an array of strings
    string students[] = {"TylertylertylertylertylertylertylertylerBAILEY","Rachel", "Bailey", "Gus Gus"};

    // store the size of

    // Store number of elements in the string
    int num_elements = sizeof(students)/sizeof(students[0]);

    // Print out all elements in the array
    for(int i=0; i < num_elements; i++){
        cout << students[i] << endl;
    }
    cout << endl;

    return 0;
}

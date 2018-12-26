#include <iostream>

// function prototypes
void print_array(int array[], int array_size); // use [] in function prototype and declaration but NOT in function call

// main
int main()
{
    /* ARRAYS
    - Contiguous series of elements of the same type.
    - Accesses by a name (of the array) and the index (of the element being accessed)
    - Array is really a pointer to the first element in the array.
    */


    // METHOD 1: create an array of ints (automatically sized)
    int my_array[] = {1,2,3,4,5,6}; // array size is automatically determined
    int my_array_size = sizeof(my_array)/sizeof(my_array[0]);
    std::cout << "my_array_size       = " << my_array_size << std::endl;

    // get the size (bytes) of the entire 'my_array'
    std::cout << "sizeof(my_array)    = " << sizeof(my_array) << std::endl; // 5 elements times 4 bytes each = 20 total bytes

    // get the size (bytes) of the first element of 'my_array[0]'
    //std::cout << "sizeof(my_array[0]) = " << sizeof(my_array[0]) << std::endl; // int type takes up 4 bytes

    // get the number of elements in 'my_array'
    //std::cout << "sizeof(my_array)/sizeof(my_array[0]) = " << sizeof(my_array)/sizeof(my_array[0]) << std::endl;

    // METHOD 2: create an array of chars (manually sized)
    const int your_array_size = 5; // arrays can't be resized. (in general, use std::vector instead!)
    int your_array[your_array_size] = {};

    // populate 'your_array' with zeros
    for (int i = 0; i < your_array_size; ++i)
    {
        your_array[i] = 0;
        std::cout << "your_array[" << i << "] = " << your_array[i] << std::endl;
    } std::cout << std::endl;

    // arrays are really just pointers (...but different)
    int my_int = 5;
    std::cout << "my_int                    = " << my_int << std::endl;
    std::cout << "&my_int                   = " << &my_int << std::endl;
    int* ptr = &my_int;
    std::cout << "ptr                       = " << ptr << std::endl;
    std::cout << "typeid(ptr).name()        = " << typeid(ptr).name() << std::endl;
    std::cout << "typeid(your_array).name() = " << typeid(your_array).name() << std::endl << std::endl;

    // change the first and second elements in 'your_array' to 42 and 99
    your_array[0] = 42;
    your_array[1] = 99;

    // get the first element of an array
    std::cout << "your_array[0]     = " << your_array[0] << std::endl; // standard way
    std::cout << "*your_array       = " << *your_array << std::endl; // or dereference the array pointer

    // get the second element of an array
    std::cout << "your_array[1]     = " << your_array[0] << std::endl; // standard way
    std::cout << "*(your_array + 1) = " << *(your_array + 1) << std::endl << std::endl; // or add one (byte) to array pointer then dereference it

    // pass an array to the function 'print_array'
    print_array(my_array, my_array_size); // do not need [] after array's name in function call argument
    print_array(your_array, your_array_size); // do not need [] after array's name in function call argument

    // search 'my_array' to see if it contains the value 3 using an array and a pointer (http://www.cplusplus.com/reference/algorithm/find/)
    const int to_find = 7;
    int* p;
    p = std::find(my_array, std::end(my_array), to_find);
    if (p != std::end(my_array))
    {
        std::cout << "Element found in array: " << *p << '\n';
    }
    else
    {
        std::cout << "Element not found in array\n";
    }


    std::cout << "my_array           = " << my_array << std::endl;
    std::cout << "my_array + 1       = " << my_array + 1 << std::endl;
    std::cout << "my_array + 2       = " << my_array + 2 << std::endl;
    std::cout << "my_array + 3       = " << my_array + 3 << std::endl;
    std::cout << "my_array + 4       = " << my_array + 4 << std::endl;
    std::cout << "my_array + 5       = " << my_array + 5 << std::endl;
    std::cout << "my_array + 6             = " << my_array + 6 << std::endl;

    std::cout << "std::end(my_array)       = " << std::end(my_array) << std::endl;
    std::cout << "my_array + my_array_size = " << my_array + my_array_size << std::endl;

    std::cout << "\0" << std::endl;





    return 0;
}



// function declarations
void print_array(int array[], int array_size) // use [] in function prototype and declaration but NOT in function call
{
    std::cout << "{";
    for(int i = 0; i < array_size-1; ++i)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << array[array_size - 1] << "}" << std::endl;
}


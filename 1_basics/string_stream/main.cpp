#include <iostream>
#include <string>
#include <sstream>

int main ()
{
   // Declare variables to store values in
   std::string stringLength;
   float inches = 0;
   float yardage = 0;

   // Retrieve the number of inches from the user (entire line read as string)
   std::cout << "Enter number of inches: ";
   std::getline (std::cin,stringLength);

   // Convert the 'stringLength' string variable into a float using one of 2 methods:
   // METHOD 1: stringstream
   std::stringstream(stringLength) >> inches;
   std::cout << "stringstream --> " << inches << std::endl;
   // METHOD 2: atof()
   inches = std::atof(stringLength.c_str());// <-- .c_str() converts a string to a c_str array.
   std::cout << "atof (c_str TO float)    --> " << inches << std::endl;
   inches = std::atoi(stringLength.c_str());
   std::cout << "atoi (c_str TO int)      --> " << inches << std::endl;
   inches = std::atoi(stringLength.c_str());
   std::cout << "atol (c_str TO long int) --> " << inches << std::endl;

   // std::cout<<"You entered "<<inches<<"\n";
   // yardage = inches/36;
   // std::cout << "Yardage is " << yardage << std::endl;


   // Pause output
   std::cin.get();
   return 0;
}



#include <iostream>
#include <string>
#include <sstream> // std::stringstream  ...to convert strings to other variable types


int main ()
{
   std::string num_inches;
   float inches = 0;
   float yardage = 0;

   // get number of inches from the user via console
   std::cout << "Enter number of inches: ";
   std::getline (std::cin, num_inches);

   // // std::getline reads in chars and spaces as std::string until '\n' character is reached
   //std::string s = "stuff";
   //std::cout << typeid(s).name() << std::endl;
   //std::cout << typeid(num_inches).name() << std::endl;

   // METHOD 1: convert 'num_inches' from type std::string to float using 'std::stringstream()' for C++98 and up
   std::stringstream(num_inches) >> inches;
   std::cout<<"You entered "<<inches<<"\n";
   yardage = inches/36.0;
   std::cout << "Yardage is " << yardage << std::endl;

   // METHOD 2 (better?): convert 'num_inches' from type std::string to float using 'std::stof()' for C++1 and up
   inches = std::stof(num_inches);
   std::cout<<"You entered "<<inches<<"\n";
   yardage = inches/36.0;
   std::cout << "Yardage is " << yardage << std::endl;

   // pause terminal output
   std::string junk;
   std::getline(std::cin, junk);
   return 0;
}


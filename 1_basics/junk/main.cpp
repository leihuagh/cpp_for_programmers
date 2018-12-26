#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  // create input file stream object called 'myfile'
  fstream myfile;

  // open input file stream object called 'myfile'
  myfile.open("data.txt", ios::out);

  // check for error opening 'myfile'
  if (myfile.is_open())
  {
    cout << "file opened" << endl;
    myfile.close();
    cout << "file closed" << endl;
  }
  else
  {
    cerr << "Error Opening File" << endl;
  }


  return 0;
}

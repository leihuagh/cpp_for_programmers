/* File IO Steps:

1.  Include <fstream> library:

    #include <fstream>

2.  Create a stream (input, output, or both). Use one of the following 3 choices:

    ofstream ofile; // ...create output file stream called 'of' (output file).  Write to the file from the C++ program.
    ifstream ifile; // ...create input  file stream called 'if' (input  file).  Read from the file into the C++ program.
    fstream  file;  // ...create 2-way  file stream called 'f'  (input/output file).  Write or write to or from the file and the C++ program.

3.  Open the file:

    ofile.open("log_data.txt");
    ifile.open("sensor_data.txt");
    file.open("test.txt");

4.  Write or read the file:

5.  Close the file:

    ofile.close();
    ifile.close();
    file.close();

*/


#include <iostream>
#include <fstream> // ifstream, ofstream, fstream
#include <string>
using namespace std;

int main ()
{
    /* READ FROM A FILE */

    // Create an input file stream, called 'ifile', to read from the file
    ifstream ifile("input.txt", ios::in); // ...during the creation of ifstream, the file is opened so we don't need to add the line: ifile.open();

    // Declare a string variable 'line' which will hold each line of text as we read from the file.
    string line;

    if (ifile.is_open())
    {
        cout << " /* READ FROM A FILE */ " << endl;
        while(getline(ifile, line))
        {
            cout << line << endl;
        }
        ifile.close();
    }
    else cout << "Unable to open file for reading (first try)..." << endl << endl;



    /* WRITE TO A FILE */

    // Create an output stream to write to the file
    // Append the new lines to the end of the file
    ofstream ofile("input.txt", ios::app);// <-- append (default if blank) ...OR use 'ios::in' for reading OR use 'ios::out' for writing (a.k.a. overwriting) OR 'ios::in|ios::out' for read/write.
    if (ofile.is_open())
    {
        cout << " /* WRITE TO A FILE */ " << endl << endl;
        ofile << "\nI am adding a line.\n";
        ofile << "I am adding another line.\n";
        ofile.close();
    }
    else cout << "Unable to open file for writing..." << endl;



     /* READ FROM THE FILE AGAIN (...should see the original line plus the 2 we added) */

    // Don't need to create 'ifile' again, but we do need to open it because we ran: ifile.close() above
    ifile.open("input.txt", ios::in);

    if (ifile.is_open())
    {
        cout << " /* READ FROM A FILE AGAIN */ " << endl;
        while(getline(ifile, line))
        {
            cout << line << endl;
        }
        ifile.close();
    }
    else cout << "Unable to open file for reading (second try)..." << endl << endl;

    // check to make sure 'ifile' and 'ofile' are both closed
    //cout << "ifile.is_open() = " << ifile.is_open() << endl;
    //cout << "ofile.is_open() = " << ofile.is_open() << endl;

    return 0;
}


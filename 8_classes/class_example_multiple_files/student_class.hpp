#pragma once

#include <string>
using namespace std;

class Student
{
private:
    string name;
    int id;
    int grad_date;

public:
    // Constructor
    Student(string name_in, int id_in, int grad_date_in);

    // Setter functions
    void set_name(string name_in);
    void set_id(int id_in);
    void set_grad_date(int grad_date_in);

    // Getter functions
    string get_name();
    int get_id();
    int get_grad_date();

    // Misc. functions
    void print();

    // Destructor
    ~Student();
};

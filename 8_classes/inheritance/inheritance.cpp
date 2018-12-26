/*Goal: study a simple example if inheritance.
*/
#include"inheritance.hpp"

int main()
{
    //Create an instance of the derived class,
    //GradStudent
    GradStudent gs1;

    //Set the id of the grad student
    //using the function in the base class
    gs1.setId(123456789);

    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("AS Nursing");

    cout<<gs1.getId()<<" "<<gs1.getDegree();
    return 0;
}

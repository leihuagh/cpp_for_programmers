/* Importing Eigen */

#include <iostream>
#include <Eigen/Dense>
using namespace std;

int main(int argc, char* argv[])
{
  cout << "Eigen successfully imported!" << endl << endl;

  Eigen::MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);

  cout << "m = \n" << m << endl;

  return 0;
}


// using Eigen::MatrixXd;
// int main()
// {
//   MatrixXd m(2,2);
//   m(0,0) = 3;
//   m(1,0) = 2.5;
//   m(0,1) = -1;
//   m(1,1) = m(1,0) + m(0,1);
//   std::cout << m << std::endl;
// }

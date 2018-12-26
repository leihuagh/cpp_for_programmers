#include <iostream>
#include <iomanip> // std::setw()

int main()
{
  std::cout<<"\n\nThe text without any formating\n";
  std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
  std::cout<<"a"<<"b"<<"c"<<"\n";

  std::cout<<"\nThe text with setw(15)\n";
  std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
  std::cout<<"a"<<std::setw(15)<<"b"<<std::setw(15)<<"c"<< "\n";

  std::cout<<"\n\nThe text with tabs\n";
  std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
  std::cout<<"a\t"<<"b\t"<<"c"<< "\n";

}

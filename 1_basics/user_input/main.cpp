#include <iostream>
#include <string>


int main()
{
    int year = 0;
    int age = 0;
    std::string name;

    //print a message to the user
    std::cout<<"What year is your favorite? ";

    //get the user response and assign it to the variable year
    std::cin >> year;

    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";

    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";

    //get the user response and assign it to the variable age
    std::cin >> age;

    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!" << std::endl;

    // THIS VERSION ONLY RETRIEVES CHARS UP TO THE FIRST SPACE:
    // std::cout<<"What is your name? ";
    // std::cin>>name;
    // std::cout<<"Hello "<<name<<" !\n";

    // THIS VERSION RETRIEVES CHARS UP TO THE FIRST NEWLINE:
    std::string userName;
    std::cout << "Please enter your full name: ";
    std::getline(std::cin, userName);
    std::cout << userName << std::endl;

    std::getline(std::cin, userName);
    std::cout<<"How interesting your full name is " << userName << std::endl;

    // Keep the terminal open until ENTER is pressed
    std::cout << "\n\n\nPress ENTER to quit..." << std::endl;
    std::cin.get();
    return 0;
}

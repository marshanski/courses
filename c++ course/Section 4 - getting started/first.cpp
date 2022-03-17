#include <iostream>

int main()
{
    int favorite_number;

    std::cout << "Enter your favorite number between 1 and 300: ";

    std::cin >> favorite_number;
    
    std::cout << "Amazing thats my favorite number" << std::endl;

    std::cout << "no really "<< favorite_number<<  " is my favorite number" << std::endl;

    return 0;

}
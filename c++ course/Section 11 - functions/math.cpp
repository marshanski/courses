/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : math.cpp
*******************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num{};
    cout << "Please enter a number : " << endl;
    cin  >> num;

    cout << "The sqrt of "       << num  << " is: " << sqrt(num) << endl; 
    cout << "The cubed root of " << num  << " is: " << cbrt(num) << endl; 
    cout << "The sin of "        << num  << " is: " << sin(num) << endl; 
    cout << "The cosin of "      << num  << " is: " << cos(num) << endl; 
    cout << "The ceil of "       << num  << " is: " << ceil(num) << endl; 
    cout << "The floor of "      << num  << " is: " << floor(num) << endl; 
    cout << "The round of "      << num  << " is: " << round(num) << endl; 

} 
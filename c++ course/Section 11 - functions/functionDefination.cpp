/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : functionDefination
*******************************************************/
//-----------------------INCLUDE-----------------------
using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
//-----------------------------------------------------
//-----------------------CONSTANTS---------------------
const double pi{3.14159};
//-----------------------------------------------------

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

void area_circle()
{
    double radius{};
    cout <<"\n Enter the radius of the circle: ";
    cin  >> radius;
    cout << "The area of the circle with radius " << radius  << " is " <<calc_area_circle(radius) << endl;
}



int main()
{
    area_circle();
    return 0;
    
} 
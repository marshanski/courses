/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : functionPrototype
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
//-------------------FUNCTION-PROTOTYPE----------------
double calc_area_circle(double radius);
void area_circle();
//-----------------------------------------------------

int main()
{
    area_circle();
    return 0;
    
} 
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


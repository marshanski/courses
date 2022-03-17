/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : rangeBaseForLoop
*******************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    //for loop with a vector
    vector <double> temps{10.0,20.0,30.0,40.0,50.0};
    double average_temp {}, sum{};
    for (auto temp: temps)
    {
        sum += temp;
    }

    average_temp = sum / temps.size();
    
    return 0;

} 
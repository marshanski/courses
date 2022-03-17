/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : whileLoop
*******************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    //for loop with a vector
    vector <double> temps{10.0,20.0,30.0,40.0,50.0};
    double average_temp {}, sum{};
    int i {0};
    while (i<10)
    {
        cout << i << endl;
        i++;
    }
    
    return 0;

} 
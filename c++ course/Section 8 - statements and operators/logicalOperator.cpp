/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : logicalOperators
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int lower{10},upper{20};
    bool within_bounds{false};

    cout << boolalpha;
    cout << "Enter integer between 10 to 20 : " << endl;
    cin  >> num;
    
    within_bounds = (num > lower  && num < upper);
    within_bounds = (num < lower  || num > upper);
    within_bounds = (num == lower || num == upper);

    return 0;

}
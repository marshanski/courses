/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : conditionalOperator
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num{};

    cout << "Enter an integer: ";
    cin  >> num;

    cout << num << " is " << ((num % 2 ==0)? "even" : "odd") << endl;

    return 0;

} 
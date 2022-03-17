/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : mixedTypeExpression
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1{10},num2{20},num3{30},total{};
    const int count{3};

    total   = num1 + num2 + num3;
    double average{0.0};
    average = static_cast<double>(total) / count;
    // average = {double}total/count; old style C




    return 0;

}
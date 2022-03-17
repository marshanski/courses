/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : incAndDecOperator
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    int counter{10};
    int result {0};
    //increasing by one
    counter = counter + 1;
    counter++;
    ++counter;

    //pre incremant
    int counter{10};
    int result {0};
    result = ++counter; // first countr ++ and then the assigment

    //post increment
    int counter{10};
    int result {0};
    result = counter++; // first the assigment and the the increasment

    //exampe 4
    int counter{10};
    int result {0};
    result = ++counter + 10; //result = 21

    //example 5
    int counter{10};
    int result {0};
    result = counter++ + 10; //result = 20
    return 0;

}
/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : inlineFunc
*******************************************************/
//-----------------------INCLUDE-----------------------
using namespace std;
#include <iostream>
#include <string>
#include <vector>
//-----------------------------------------------------
//-----------------------CONSTANTS---------------------
//-----------------------------------------------------
//-------------------FUNCTION-PROTOTYPE----------------

//-----------------------------------------------------
inline int add_numbers(int a, int b)
{
    return a+b;
}

int main()
{
    int result{0};
    result = add_numbers(10,20);
    return 0;
    
} 



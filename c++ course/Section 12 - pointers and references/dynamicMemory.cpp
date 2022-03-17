/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : dynamicMemory
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

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;


    size_t size{0};
    double *temp_ptr {nullptr};

    cout <<"How many temps: " << endl;
    cin  >> size;
    temp_ptr = new double[size];
    cout << temp_ptr << endl;

    delete []temp_ptr;


    return 0;
    
} 



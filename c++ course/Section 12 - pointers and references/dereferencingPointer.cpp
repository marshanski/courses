/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : pointers
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
    int score{100};
    int *score_ptr {&score};

    cout << *score_ptr << endl;  //100

    *score_ptr = 200;
    cout << *score_ptr << endl;
    cout << score << endl;

    cout <<"\n------------------------------" << endl;
    string name{"Frank"};
    string *string_ptr{&name};
    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl; // the value
    cout << string_ptr << endl; // the adressm



    return 0;
    
} 



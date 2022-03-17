/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : passByreference
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
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector <string> &v);
void pass_by_ref4(const vector <string> &v);//const
//-----------------------------------------------------
void pass_by_ref1(int &num)
{
    num = 1000;
}

void pass_by_ref2(string &s)
{
    s = "Changed";
}

void pass_by_ref3(vector <string> &v)
{
    v.clear();
}

void print_vector(const vector <string> &v)
{
    for( auto s:v)
        cout << s << " ";
    cout << endl;
}

int main()
{
    return 0;
    
} 



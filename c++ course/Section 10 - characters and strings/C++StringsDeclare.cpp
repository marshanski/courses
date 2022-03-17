/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : C++StringsDeclare
*******************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string s1;              // Empty
    string s2 {"Frank"};    // Frank
    string s3 {s2};         // Frank
    string s4 {"Frank", 3}; // Fra
    string s5 {s3 ,0 ,2};   // Fr
    string s6 (3,'X');      // XXX



}
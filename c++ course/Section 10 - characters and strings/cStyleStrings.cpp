/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : cStyleStrings
*******************************************************/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    
    char first_name [20] {};
    char last_name  [20] {};
    char full_name  [50] {};
    char full_name2 [50] {};
    char temp       [50] {};


    //input a line
    cout << "Please enter your full name: " << endl;
    cin.getline(full_name2,50); 

    cout << "Please enter your first name: " << endl;
    cin  >> first_name;

    cout << "Please enter your last name: "  << endl;
    cin  >> last_name;
    cout << "-----------------------------"  << endl;

    strcpy(full_name,first_name); // copy first name to full name
    strcat(full_name," ");        // concatenate full name and a space
    strcat(full_name,last_name);  // concatenate full name and a last name



    cout << strcmp(full_name,full_name2)  << endl; //0 if they are rquel else 1
    



}
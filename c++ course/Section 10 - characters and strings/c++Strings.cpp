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
    string s1 {"This is a test"};
    //substr
    cout << s1.substr(0,4)  ; // this
    cout << s1.substr(5,2)  ; // is
    cout << s1.substr(10,4) ; // test

    //find
    cout << s1.find("This") ; // 0
    cout << s1.find("is")   ; // 2
    cout << s1.find("test") ; // 10
    cout << s1.find("e")    ; // 11
    cout << s1.find("is")   ; // 5
    cout << s1.find("XX")   ; // string::npos

    //length
    cout << s1.length() << endl;

    // earse and clear
    cout << s1.erase(0,5); // is a test
    cout << s1.erase(5,4); // is a
    s1.clear();

    //input getline
    getline(cin ,s1);      // until the keybord collect enter
    getline(cin ,s1 ,'x');// until the keybors is collection x char





}
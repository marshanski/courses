/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : switchWithEnumeration
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    enum Direction{left,right,up,down};
    Direction heading{left};
    switch (heading)
    {
        case left:
            cout << "going left" << endl;
            break;
        case right:
            cout << "going right" << endl;
            break;
        
        default:
            cout << "Sorry not a valid letter" << endl;

    }
    

    return 0;

} 
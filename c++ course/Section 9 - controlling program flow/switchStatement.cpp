/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : switchStatement
*******************************************************/
#include <iostream>
using namespace std;

int main()
{

    char letter_grade{};

    cout << "Please enter letter grade : " << endl;
    cin  >> letter_grade ;

    switch (letter_grade)
    {
        case 'a':
        case 'A':
            cout << " You need a 90 or above" << endl;
            break;

        case 'B':
        case 'b':
            cout <<" You need 80-89" << endl;
            break;

        default:
            cout << "Sorry not a valid letter" << endl;
    }

    return 0;

} 
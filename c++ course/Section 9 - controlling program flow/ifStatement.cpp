/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : ifStatement
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    int min{10},max{100};
    int grade{};
    char letter_grade{};

    cout << "Please enter grade : " << endl;
    cin  >> grade ;

    if (grade > 90)
        letter_grade = 'A';
    else if (grade > 80)
        letter_grade = 'B';
    else if (grade > 70)
        letter_grade = 'C';
    else if (grade > 60)
        letter_grade = 'D';
    else
        letter_grade = 'F';
    
    cout << "Your grade is : " << letter_grade << endl;

    return 0;

} 
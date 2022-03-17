/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : doWhileLoop
*******************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    char selection{};
    do
    {
        cout << "\n------------------------" << endl;
        cout << "1.Do this" << endl;
        cout << "2.Do that" << endl;
        cout << "3.Do something else" << endl;
        cout << "Q.Quit" << endl;
        cout << "Enter your selection: " << endl;
        cin >> selection ;
        
    } while (selection != 'q' && selection != 'Q');
    

} 
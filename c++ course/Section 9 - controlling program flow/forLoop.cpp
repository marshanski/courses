/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : forLoop
*******************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    for (int i{0}; i < 10 ; i++)
    {
        cout << i << endl;
    }
    //two variables in a for loop
    for (int i{0},j{10}; i < 10 ; i++,j++)
    {
        cout << i << endl;
        cout << j << endl;
    }
    //for loop with a vector
    vector <int> nums{10,20,30,40,50};
    for (unsigned i{0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    


    return 0;

} 
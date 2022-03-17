/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : random.cpp
*******************************************************/
//-----------------------INCLUDE-----------------------
#include <iostream>
#include <cstdlib>
#include <ctime>
//-----------------------------------------------------
using namespace std;

int main()
{
    int random_number {},min{1},max{6};
    size_t count {10};

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for (size_t i{0}; i <=count; i++)
    {
        random_number = rand() % max + min; // generate a random number[min,max]
        cout << random_number << endl;
    }

    return 0;
    
} 
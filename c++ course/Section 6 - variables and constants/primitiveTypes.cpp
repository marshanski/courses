/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   :Declare
*******************************************************/
#include <iostream>
using namespace std;


int main()
{
    /*****************************
     * Character type
    *****************************/
   char middle_initial {'j'};
    /*****************************
     * Integer type
    *****************************/
   unsigned short int exam_score{55}; // same as unsigned short exam_score {55}
   long people_in_florida{20610000};
   long long people_on_earth{7'600'000'000};

    /*****************************
     * Floating point type
    *****************************/
   float car_payment {401.23};
   double pi{3.14159};
   long double large_amount{2.7e120};

    /*****************************
     * Boolean type
    *****************************/
   bool game_over {false};

    /*****************************
     * overflow example
    *****************************/
   short value1{30000};
   short value2{1000};
   short product{value1*value2};






    return 0;

}
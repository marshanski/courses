// Arrays

#include <iostream>
using namespace std;

const int rows{3};
const int cols{4};



int main()
{
    int movie_rating [rows][cols];

    //cin >> movie_rating[1][2];
    //cout << movie_rating[1][2];

    int movie_rating_sec [rows][cols] 
    {
        {0,4,3,5},
        {2,3,4,5},
        {1,4,4,5}
    };

    cout << movie_rating_sec[1][2];
    



    return 0;

}
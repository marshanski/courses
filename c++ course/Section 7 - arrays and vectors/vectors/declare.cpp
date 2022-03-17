// Vectors

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector <char> vowels (5);
    vector <int> test_scores (10);

    vector <char> vowels {'a','e','i','o','u'};
    vector <int> test_scores {100,98,89,85,93};
    vector <double> hi_temperatures(365,80.0);

    //example of a 2D-vector
    vector <vector<int>> movie_ratings 
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}

    };
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings.at(0).at(0) << endl;


    return 0;

}
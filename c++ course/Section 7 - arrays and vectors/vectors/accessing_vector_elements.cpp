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

    cout <<"The first score at index 0: " << test_scores[0] << endl;
    cout <<"The first score at index 0: " << test_scores.at(0) << endl;

    cin >> test_scores.at(0);
    test_scores.at(0) = 90;

    vector <int> test_scores {100,95,99}; // 100,95,99
    test_scores.push_back(80);            //100,95,99,80
    test_scores.push_back(90);            //100,95,99,80,90

    return 0;

}
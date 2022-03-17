// Vectors - challenge

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector <int> vector1 ;
    vector <int> vector2 ;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "The first number is : " << vector1.at(0) <<endl;
    cout << "The second number is : " << vector1.at(1) <<endl;
    cout << "The size of the vector is : " << vector1.size() <<endl;

    cout << "The first number is : " << vector2.at(0) <<endl;
    cout << "The second number is : " << vector2.at(1) <<endl;
    cout << "The size of the vector is : " << vector2.size() <<endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "vector_2d :" << endl;
    cout << vector_2d.at(0).at(0)  << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0)  << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "vector_2d :" << endl;
    cout << vector_2d.at(0).at(0)  << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0)  << " " << vector_2d.at(1).at(1) << endl;

    cout << "vector1 :" << endl;
    cout << vector1.at(0)  << " " << vector1.at(1) << endl;





    return 0;

}
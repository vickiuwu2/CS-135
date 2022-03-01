// Author: Vicki Wu
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab Quiz 1
// Enter an int, print that number of "I love C++" lines


#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter an int: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cout << "I love C++" << endl;
    }

    return 0;
}
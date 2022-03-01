/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4D

Prints the bottom-left half of a square, given the side length.
*/

#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "Input side length: ";
    cin >> length;

    for (int x = 1; x <= length; x++)
    {
        for (int y = 1; y <= x; y++)
        {
           cout << '*';
        }
        cout << endl;
    }

    return 0;
}
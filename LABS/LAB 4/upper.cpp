/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4E

Prints the top-right half of a square, given the side length.
*/

#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "Input side length: ";
    cin >> length;
    int space = length;

    for (int x = 1; x <= length; x++)
    {
        for (int y = 1; y <= length; y++)
        {
            cout << '*';
        }
        space--;
    }
}
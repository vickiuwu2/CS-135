/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4A

Asks the user to input width and height and prints a solid rectangular box of 
the requested size using asterisks.

Prints a line "Shape:"" between user input and the printed shape 
(to separate input from output).
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    cout << endl << "Shape: " << endl;

    for (int count = 0; count < height; count++)
    {
        for (int i = 0; i < width; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
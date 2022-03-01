/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4B

Asks the user to input width and height and prints 
a rectangularcheckerboard of the requested size using 
asterisks and spaces (alternating).
*/

#include <iostream>
using namespace std;

int main()
{
    int w, h, count = 1, end = 0;
    cout << "Input width: ";
    cin >> w;
    cout << "Input height: ";
    cin >> h;

    cout << endl << "Shape: " << endl;

    while (count <= h)
    {
        if (count % 2 != 0)
        {
            for (int i = 0; i < w; i += 2)
            {
                cout << "*";
                if (end < w-2)
                {
                    cout << " ";
                }
                end += 2;
            }
            end = 0;
        }
        else
        {
            for (int i = 0; i < w; i += 2)
            {
                cout << " ";
                if (end < w-2)
                {
                    cout << "*";
                }
                end += 2;
            }
            end = 0;
        }
        
        cout << endl;
        count++;
    }

    return 0;
}
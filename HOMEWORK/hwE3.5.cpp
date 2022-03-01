//Author: Vicki Wu
/* Course: CSCI-135
Instructor: Tong Yi
Assignment: HW3.1

Reads three numbers and prints increasing if they are in increasing order, 
decreasing if they are in decreasing order, 
and neither otherwise. 
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter 1st integer: ";
    cin >> x;
    cout << "Enter 2nd integer: ";
    cin >> y;
    cout << "Enter 3rd integer: ";
    cin >> z;

    if ((x < y) && (y < z))
    {
            cout << "increasing" << endl;
    }
    else if ((x > y) && (y > z))
    {
            cout << "decreasing" << endl;
    }
    else
    {
        cout << "neither" << endl;
    }

    return 0;
}


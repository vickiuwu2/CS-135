/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1A

Reads a sequence of integers from a text file and adds them together.
*/

#include <iostream>
using namespace std; 

int main()
{
    int a, sum;
    sum = 0; 
    while (cin >> a)
    {
        sum += a;
    }

    cout << sum << endl;

    return 0;
}
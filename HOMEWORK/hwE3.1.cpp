/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW3.1

Write a program that reads an integer and prints whether it is negative, zero, or
positive.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << n << "is a negative integer.";
    }
    else if (n > 0)
    {
        cout << n << "is a positive integer.";
    }
    else 
    {
        cout << n << "is zero.";
    }

    return 0;
}
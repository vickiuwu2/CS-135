/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1D

This code is an even more complex calculator that computes addition, 
subtraction, and squared numbers given multiple expression.
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, num;
    char sign;

    while (cin >> num >> sign)
    {
        if (sign == '^')
        {
            num = num*num;
            cin >> sign;
            if (sign == '+')
            {
                sum += num;
            }
            else if (sign == '-')
            {
                sum -= num;
            }
        }
        else if (sign == '+')
        {
            sum += num;
        }
        else if (sign == '-')
        {
            sum -= num;
        }
    }

    cout << sum << endl;

    return 0;
}
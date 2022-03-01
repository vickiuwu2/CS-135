/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1B

This code is a simple calculator that computes addition and subtraction given an expression.
1 comment
*/

#include <iostream>
using namespace std; 

int main()
{
    int answer, num;
    char sign;
    cin >> answer;

    while (cin >> sign >> num)
    {
        if (sign == '+')
            answer += num;
        else
            answer -= num;
    }

    cout << answer << endl;

    return 0;
}
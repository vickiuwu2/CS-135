/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1C

This code is a more complex calculator that computes addition and subtraction given multiple expression.
1 comment
2 comment
*/

#include <iostream>
using namespace std; 

int main()
{
    int answer, num;
    char sign;
    cin >> answer;

    while (cin >> sign)
    {
        if (sign == '+')
        {
            cin >> num;
            answer += num;
        }
        else if (sign == '-')
        {
            cin >> num;
            answer -= num;
        }
        else 
        {
            cout << answer << endl;
            cin >> answer;
        }
    }

    return 0;
}
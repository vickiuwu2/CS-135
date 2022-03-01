/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: HWE2.10

Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank.
*/

#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "Enter the number of gallons of gas in the tank: ";
    cin >> x;
    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> y;
    cout << "Enter the price of gas per gallon: ";
    cin >> z;

    double cost = (100.00 / y * z);
    double efficiency = (x * y);

    cout << cost << endl;
    cout << efficiency << endl;

    return 0;
}
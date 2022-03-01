/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3A


*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

//reads input file, if it fails to open, it exits.

int main()
{
   ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    string Date, date, eastSt, eastEl, westSt, westEl;
    cout << "Enter date: ";
    cin >> Date;
      while ((fin >> date >> eastSt >> eastEl >> westSt >> westEl) && (Date == date))
    { 
        fin.ignore(INT_MAX, '\n'); 
        cout << date << " " << eastSt << endl;
    }
    cout << date << " " << eastSt << endl;

    fin.close(); 

    return 0;
}
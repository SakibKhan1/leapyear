/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 C

This program will make you input any 4 digit year and will find out of it is a common year or leap year.
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    //asking user input for year
    if(year % 4 != 0){
    //use '%' to test if year is divisible by 4
        cout << "Common year" << endl;
    }else if(year % 100 != 0){
        cout << "Leap year" << endl;
    }else if(year % 400 != 0){
        cout << "Common year" << endl;
    }else{
        cout << "Leap year" << endl;
        }

 return 0;

}

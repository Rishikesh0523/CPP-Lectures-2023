// if.cpp
// Program to know if student has passed or not
// FM = 100, PM = 40

#include <iostream>
using namespace std;

int main()
{
    float marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 40)
    {
        cout << "You have passed!";
    }
    else
    {
        cout << "You have failed!";
    }
    return 0;
}


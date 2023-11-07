// short_if.cpp
// Program to know if student has passed or not
// FM = 100, PM = 40

#include <iostream>
using namespace std;

int main()
{
    float marks;
    cout << "Enter marks: ";
    cin >> marks;
    (marks>=40)? cout << "Passed" : cout << "Failed" ;
    return 0;
}
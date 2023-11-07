// nested_if.cpp
// Finding the largest of three different integer numbers using nested if

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three different numbers: ";
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a>b)
    {
        if (a>c)
        {
            cout << a <<" is the largest number!";
        }
        else
        {
            cout << c << " is the largest number";
        }
    }
    else
    {
        if (b>c)
        {
            cout << b << "is the largest number!";
        }
        else
        {
            cout << c << " is the largest number";
        }
    }
    return 0;
}
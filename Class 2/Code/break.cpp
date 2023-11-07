// break.cpp
// Prompts the user to enter an integer and displays a message whether the number if prime or not

#include <iostream>
using namespace std;

int main()
{
    int i, number;
    cout << "Enter an integer greater than 1: ";
    cin >> number;

    for (i = 2; i <= number; i++)
    {
        if (number%i==0)
            break;
    }
    if (i == number) 
    {
        cout << number << " is a prime number!";
    }
    else
    {
        cout << number << " is not a prime number";
    }
}
// dowhile.cpp
// Program to read a positive integer and display the sum of digits in it.

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, r;
    cout << "Enter a positive integer: ";
    cin >> number;

    do
    {
        r = number % 10; // to separate the last digit of the integer
        sum += r;
        number = number / 10; // to truncate the last digit of the integer
    } while (number != 0);
    cout << "The sum of digits of the given number is: " << sum;
    return 0;
}
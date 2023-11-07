// while.cpp
// Sum of numbers entered by user until the sum remains less than or equal to 1000

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    
    while (sum <= 1000)
    {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    }
    cout << "Sum = " << sum;
    return 0;
}
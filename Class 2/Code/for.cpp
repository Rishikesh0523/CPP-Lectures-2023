// Factorial of given number

#include <iostream>
using namespace std;

int main()
{
    int number, i;
    long int fact = 1;
    
    cout << "Enter a non negative integer: ";
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        fact *= i;
    }
    cout << "The factorial of the number " << number << " is " << fact;
    return 0;    
}
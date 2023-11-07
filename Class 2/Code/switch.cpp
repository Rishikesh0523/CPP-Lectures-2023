// switch.cpp
// A simple calculator

#include <iostream>
using namespace std;

int main()
{
    char _operator;
    float a, b;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> _operator;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    switch (_operator)
    {
        case '+':
            cout << a << " + " << b << " = " << a+b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a-b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a*b;
            break;
        case '/':
            cout << a << " / " << b << " = " << a/b;
            break;
        default:
            cout << "Invalid!";
            break;
    }

    return 0;
}
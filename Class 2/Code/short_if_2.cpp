// short_if_2.cpp
// Alternative to nested_if.cpp

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three different numbers: ";
    cin >> a >> b >> c;

    int largest;
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "Largest is: " << largest;
    return 0;
}
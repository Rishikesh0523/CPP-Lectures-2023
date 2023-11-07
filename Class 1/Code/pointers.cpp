// pointer.cpp
// Illustrating the use of pointers

#include <iostream>
using namespace std;

int main() 
{
    int v = 10, *p;
    p = &v;
    cout << "Address of v=" << &v;
    cout << endl << "Address of v using pointer = " << p;
    cout << endl << "Value of v = " << v;
    cout << endl << "Value of v using pointer = " << *p;
    cout << endl << "Address of p = " << &p; 
    return 0;
}
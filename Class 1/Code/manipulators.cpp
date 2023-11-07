// manipulators.cpp
// Illustrating the use of manipulators

#include <iostream>
#include <iomanip>
using namespace std;

void endl_illlustration()
{
    cout << "Welcome" << endl
         << "to" << endl
         << "our organization!";
}

void setw_illustration()
{
    int num1 = 12345, num2 = 2356;
    cout << endl
         << "num1=" << setw(20) << num1 << "num2=" << setw(8) << num2;
}

void setfill_illustration()
{
    int num1 = 12345, num2 = 2356;
    cout << endl
         << "num1=" << setw(20) << setfill('*') << num1 << endl;
    cout << "num2=" << setfill('$') << setw(8) << num2;
}

void setprecision_illustration()
{
    float num = 70.6776;
    cout << "num with precision two = " << setprecision(2) << num << endl;
}

// Use of manipulators
int main()
{  
    endl_illlustration();
    // setw_illustration();
    // setfill_illustration();
    // setprecision_illustration();
    return 0;
}

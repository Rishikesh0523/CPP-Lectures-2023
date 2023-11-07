// if_only.cpp
// Add 10% bonus to salary if salary is less than 40,000

#include <iostream>
using namespace std;

int main()
{
    float salary;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary < 40000)
    {
        salary += 0.1 * salary;
    }

    cout << "Your final salary is: " << salary;

    return 0;
}


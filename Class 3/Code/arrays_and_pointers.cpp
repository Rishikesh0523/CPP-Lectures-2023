#include <iostream>
using namespace std;

int main()
{
    int marks[6] = {90, 91, 95, 87, 97, 98};

    for (int i = 0; i < 6; i++)
    {
        cout << *(marks + i) << endl;
    }

    return 0;
}
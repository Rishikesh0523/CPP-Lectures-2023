// A (65)-Z (90) and a(97)-z(121)

#include <iostream>
using namespace std;

int main()
{
    int integer;
    for (int i = 65; i < 122; i++)
    {
        if (i > 90 && i < 97)
        {
            continue;
        }
        cout << char(i) << " = " << i << endl;
    }
    return 0;
}
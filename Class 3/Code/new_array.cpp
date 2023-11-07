#include <iostream>
using namespace std;

int main()
{
    char word[5] = {'w', 'o', 'r', 'd'};
    for (int i = 0; i < 5; i++)
    {
        cout << word[i] << endl;
    }
    cout << word;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    letters[0][0] = "Z";

    cout << letters[0][0]; // Now outputs "Z" instead of "A"
}
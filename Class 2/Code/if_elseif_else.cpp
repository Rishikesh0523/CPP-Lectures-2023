// This program reads a co-ordinate point. And displays a message saying in which quadrant the point lies

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x-coordinate: ";
    cin >> x;
    cout << "Enter the value of y-coordinate: ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "The point lies on origin!";
    }
    else if (x > 0 && y == 0)
    {
        cout << "The point lies on positive x-axis!";
    }
    else if (x < 0 && y == 0)
    {
        cout << "The point lies on negative x-axis!";
    }
    else if (x == 0 && y > 0)
    {
        cout << "The point lies on positive y axis!";
    }
    else if (x == 0 && y < 0)
    {
        cout << "The point lies on negative y axis!";
    }
    else if (x > 0 && y > 0)
    {
        cout << "The point lies on first quadrant!";
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point lies on second quadrant!";
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point lies on third quadrant!";
    }
    else
    {
        cout << "The point lies on fourth quadrant!";
    }
    return 0;
}
#include <iostream>
using namespace std;

void fun(int a[])
{
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
}

int main() 
{
    int nums[5] = {1, 2, 3, 4, 5}, i;
    cout << "Before function call, the values are: ";
    cout << "\t";
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << "\t";
    }
    fun(nums);
    cout << endl << "After function call, the values are: ";
    cout << "\t";
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << "\t"; 
    }    
    
    return 0;
}
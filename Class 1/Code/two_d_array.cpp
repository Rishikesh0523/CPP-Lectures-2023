// two_d_array.cpp
// Program to read two 2*3 matrixes and display their sum

#include <iostream>
using namespace std;

int main()
{
    int a[2][3], b[2][3], sum[2][3];
    int m=2, n=3;

    // Getting data for the first matrix
    cout << "Enter First matrix of size 2*3 row by row: " << endl;
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Getting data for the second matrix
    cout << "Enter Second matrix of size 2*3 row by row: " << endl;
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin >> b[i][j];
        }
    }

    // Displaying array 1
    cout << "Matrix 1: " << endl;
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout << *(*(a + i)+j) << "\t";
        }
        cout << endl;
    }

    // Displaying array 2
    cout << "Matrix 2: " << endl;
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout << *(*(b + i)+j) << "\t";
        }
        cout << endl;
    }

    // Displaying the sum
    cout << "The sum of the matrices is: " << endl;
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout << a[i][j] + b[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
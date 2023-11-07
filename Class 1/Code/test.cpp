#include <iostream>
using namespace std;

int main() {
    // int one_d[2], two_d[2][2], three_d[2][2][2];
    // cout << "Enter the elements of one d array:"<< endl;
    // for (int i=0; i<2; i++)
    // {
    //     cout << i+1 << "th value: ";
    //     cin >> one_d[i];
    // }
    // // int a = 2;
    // // int *p = &a;
    // // int *q = p;
    // // cout << a << endl;
    // // cout << *p << endl;
    // // cout << **q << endl;

    // cout << *one_d << endl;
    // cout << *(one_d+1);
    // cout << two_d[0][1];
    // cout << *(*(two_d+1)+1);

    // cout << "Elements of one d array:"<< endl;
    // for (int i=0; i<2; i++)
    // {
    //     cout << i+1 << "th value: ";
    //     cout << one_d[i] << "\t";
    // }
    int a[10];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Address: " << (a+i) << "\t";
        cout << "Size: " << sizeof(a[i]) << "\t\t";
        cout << i+1 << "th value = " << *(a+i) << "\t";
        cout << i+1 << "th value = " << a[i] <<endl;
    }
    cout << endl;

    
    
    
    return 0;
}
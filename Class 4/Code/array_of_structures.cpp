#include <iostream>
using namespace std;

/* Structure template declaration globally */
struct student
{
    char name[50];
    int age;
    int roll;
    char sec;
}; 
/* End of structure declaration */

int main()
{
    struct student s[3];
    int i;
    for (i=0; i<3; i++)
    {
        cout << "Enter the name of student: ";
        cin >> s[i].name;
        cout << "Enter age: ";
        cin >> s[i].age;
        cout << "Enter roll: ";
        cin >> s[i].roll;
        cout << "Enter section: ";
        cin >> s[i].sec;
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << "## Details of Students ##" << endl;
    cout << endl;
    for (i=0; i<3; i++)
    {
        cout << "S.N.: " << i+1 << endl; 
        cout << "Name: " << s[i].name << endl;
        cout << "Age: " << s[i].age << endl;
        cout << "Roll Number: " << s[i].roll << endl;
        cout << "Section: " << s[i].sec << endl;
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

/* Structure template declaration globally */
struct student
{
    char name[50];
    int roll;
    char sec;
    float marks;
}; 
/* End of structure declaration */

int main()
{
    struct student s;
    cout << "Enter the name of a student: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter section: ";
    cin >> s.sec;
    cout << "Enter marks: ";
    cin >> s.marks;

    // struct student s = {"Radhika", 1234, 'A', 75.5};

    cout << endl;
    cout << "Details: " << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Section: " << s.sec << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}


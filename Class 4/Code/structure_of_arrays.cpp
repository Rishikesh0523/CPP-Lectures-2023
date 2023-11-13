#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int age;
    int roll;
    char sec;
    float marks[6];
};

int main()
{
    struct student s;
    float average;
    float sum =0;

    cout << "Enter the name of student: ";
    cin >> s.name;
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter roll: ";
    cin >> s.roll;
    cout << "Enter section: ";
    cin >> s.sec;
    for (int i=0; i<6; i++)
    {
        cout << "Enter marks: ";
        cin >> s.marks[i];
        sum += s.marks[i];
    }
    average = sum/6;

    cout << endl;
    cout << endl;
    cout << "Details: " << endl;
    cout << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Section: " << s.sec << endl;
    cout << "Total marks: " << sum << endl;
    cout << "Average marks: " << average << endl;
    
    return 0;
}
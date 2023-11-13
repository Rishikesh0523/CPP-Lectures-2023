#include <iostream>
using namespace std;

struct person
{
    char name[50];
    int age;
};

struct student
{
    int roll;
    char sec;
    struct person p;
};

int main()
{
    struct student s;
    s = {1190, 'W', {"Rishikesh", 45}};

    cout << "Name: " << s.p.name << endl;
    cout << "Age: " << s.p.age << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Section: " << s.sec;

    return 0;
}
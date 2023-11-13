#include <iostream>
#include <string>
using namespace std;

// Define a structure for student information
struct Student {
    string name;
    int age;
};

// Define a structure for subject grades
struct Grade {
    string subject;
    double score;
};

int main() {
    const int numStudents = 3;
    const int numSubjects = 3;

    // Declare a two-dimensional array of structures
    Student students[numStudents];
    Grade grades[numStudents][numSubjects];

    // Initialize student information
    students[0] = { "Alice", 20 };
    students[1] = { "Bob", 22 };
    students[2] = { "Charlie", 19 };

    // Initialize grades for each student and subject
    grades[0][0] = { "Math", 90.5 };
    grades[0][1] = { "Science", 85.0 };
    grades[0][2] = { "History", 78.5 };

    grades[1][0] = { "Math", 88.0 };
    grades[1][1] = { "Science", 92.5 };
    grades[1][2] = { "History", 85.0 };

    grades[2][0] = { "Math", 76.0 };
    grades[2][1] = { "Science", 81.5 };
    grades[2][2] = { "History", 90.0 };

    // Print student information and grades
    for (int i = 0; i < numStudents; i++) {
        cout << "Student: " << students[i].name << ", Age: " << students[i].age << endl;
        for (int j = 0; j < numSubjects; j++) {
            cout << "  " << grades[i][j].subject << ": " << grades[i][j].score << endl;
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    string name;
    int marks[3];
    int total;
    float average;
    char grade;
};

char calculateGrade(float avg) {
    if (avg >= 80) return 'A';
    else if (avg >= 60) return 'B';
    else if (avg >= 40) return 'C';
    else return 'F';
}

int main() {
    int n;
    Student students[MAX_STUDENTS];

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> students[i].name;

        students[i].total = 0;
        cout << "Enter marks for 3 subjects:\n";
        for (int j = 0; j < 3; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> students[i].marks[j];
            students[i].total += students[i].marks[j];
        }

        students[i].average = students[i].total / 3.0;
        students[i].grade = calculateGrade(students[i].average);
    }

    // Display all student results
    cout << "\n--- Student Results ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Total Marks: " << students[i].total << endl;
        cout << "Average: " << students[i].average << endl;
        cout << "Grade: " << students[i].grade << "\n\n";
    }

    return 0;
}

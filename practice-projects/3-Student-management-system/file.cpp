#include <iostream>
#include <fstream>
using namespace std;

class temp {
    string rollno, name, fatherName, address, search;
    fstream file;

public:
    void addStudent();
    void viewStudent();
    void searchStudent();
};

int main() {
    temp obj;  // ? Declared object of class
    char choice;

    do {
        cout << "\n----------STUDENT MANAGEMENT SYSTEM----------";
        cout << "\n1. Add student record";
        cout << "\n2. View student record";
        cout << "\n3. Search student record";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();  // ? Clears newline after choice input

        switch (choice) {
            case '1':
                obj.addStudent();
                break;
            case '2':
                obj.viewStudent();
                break;
            case '3':
                obj.searchStudent();
                break;
            case '4':
                cout << "Good Bye!" << endl;
                return 0;
            default:
                cout << "Invalid Choice. Try again." << endl;
        }
    } while (true);

    return 0;
}

void temp::addStudent() {
    cout << "Enter Student Roll No: ";
    getline(cin, rollno);
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student Father's Name: ";
    getline(cin, fatherName);
    cout << "Enter Student Address: ";
    getline(cin, address);

    file.open("studentData.txt", ios::out | ios::app);
    if (file.is_open()) {
        file << rollno << "*" << name << "*" << fatherName << "*" << address << "\n";
        file.close();
        cout << "Record Added Successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
}

void temp::viewStudent() {
    file.open("studentData.txt", ios::in);
    if (!file.is_open()) {
        cout << "Unable to open file!" << endl;
        return;
    }

    cout << "\n--- All Student Records ---\n";
    while (getline(file, rollno, '*') &&
           getline(file, name, '*') &&
           getline(file, fatherName, '*') &&
           getline(file, address)) {
        cout << "\nRoll No: " << rollno
             << "\nName: " << name
             << "\nFather's Name: " << fatherName
             << "\nAddress: " << address << "\n";
    }
    file.close();
}

void temp::searchStudent() {
    cout << "Enter Roll No to search: ";
    getline(cin, search);  // ? Proper input

    bool found = false;
    file.open("studentData.txt", ios::in);
    if (!file.is_open()) {
        cout << "Unable to open file!" << endl;
        return;
    }

    while (getline(file, rollno, '*') &&
           getline(file, name, '*') &&
           getline(file, fatherName, '*') &&
           getline(file, address)) {
        if (rollno == search) {
            found = true;
            cout << "\n--- Student Found ---";
            cout << "\nRoll No: " << rollno
                 << "\nName: " << name
                 << "\nFather's Name: " << fatherName
                 << "\nAddress: " << address << "\n";
            break;
        }
    }

    if (!found) {
        cout << "Student with Roll No " << search << " not found!" << endl;
    }

    file.close();
}

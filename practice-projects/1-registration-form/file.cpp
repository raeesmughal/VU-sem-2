#include <iostream>
#include <fstream>
using namespace std;

class temp {
    string userName, Email, password;
    string searchName, searchPassword, searchEmail;
    fstream file;

public:
    void login();
    void signUp();
    void forgot();
} obj;

int main() {
    char choice;
    while (true) {
        cout << "\n1- Login";
        cout << "\n2- Sign Up";
        cout << "\n3- Forget Password";
        cout << "\n4- Exit";
        cout << "\nEnter your choice :: ";
        cin >> choice;
        cin.ignore(); // clear the newline after cin

        switch (choice) {
            case '1':
                obj.login();
                break;

            case '2':
                obj.signUp();
                break;

            case '3':
                obj.forgot();
                break;

            case '4':
                return 0;

            default:
                cout << "Invalid Selection...!";
                break;
        }
    }
}

void temp::signUp() {
    cout << "\nEnter Your User Name :: ";
    getline(cin, userName);
    cout << "\nEnter Your Email Address :: ";
    getline(cin, Email);
    cout << "\nEnter Your Password :: ";
    getline(cin, password);

    file.open("loginData.txt", ios::out | ios::app);
    if (!file) {
        cout << "Error opening file for writing.\n";
        return;
    }

    file << userName << "*" << Email << "*" << password << endl;
    file.close();
    cout << "\nSign Up Successful!";
}

void temp::login() {
    cout << "---------LOGIN---------" << endl;
    cout << "\nEnter your userName :: ";
    getline(cin, searchName);
    cout << "\nEnter your Password :: ";
    getline(cin, searchPassword);

    file.open("loginData.txt", ios::in);
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    bool found = false;

    while (getline(file, userName, '*') &&
           getline(file, Email, '*') &&
           getline(file, password)) {

        if (userName == searchName && password == searchPassword) {
            found = true;
            cout << "\nAccount Login Successful!";
            cout << "\nUsername :: " << userName;
            cout << "\nEmail :: " << Email << endl;
            break;
        }
    }

    if (!found) {
        cout << "\nInvalid username or password.\n";
    }

    file.close();
}

void temp::forgot() {
    cout << "\nEnter Your UserName :: ";
    getline(cin, searchName);
    cout << "\nEnter Your Email :: ";
    getline(cin, searchEmail);

    file.open("loginData.txt", ios::in);
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    bool found = false;

    while (getline(file, userName, '*') &&
           getline(file, Email, '*') &&
           getline(file, password)) {

        if (userName == searchName && Email == searchEmail) {
            found = true;
            cout << "\nAccount Found...!";
            cout << "\nYour Password is :: " << password << endl;
            break;
        }
    }

    if (!found) {
        cout << "\nAccount not found or email doesn't match.\n";
    }

    file.close();
}

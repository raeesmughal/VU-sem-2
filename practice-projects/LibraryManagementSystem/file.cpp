#include<iostream>
#include<fstream>
using namespace std;

class temp {
    string id, name, author, search;
    fstream file;

public:
    void addBook();
    void showAllBook();
    void extractBook();
} obj;

int main() {
    char choice;
    while (true) {
        cout << "\n--------------------------\n";
        cout << "1. Show All Books\n";
        cout << "2. Extract Book\n";
        cout << "3. Add Books (Admin)\n";
        cout << "4. Exit\n";
        cout << "--------------------------\n";
        cout << "Enter Your Choice :: ";
        cin >> choice;
        cin.ignore();  // Ignore leftover newline

        switch (choice) {
            case '1':
                obj.showAllBook();
                break;

            case '2':
                obj.extractBook();
                break;

            case '3':
                obj.addBook();
                break;

            case '4':
                cout << "Exiting Program. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid Choice...!" << endl;
                break;
        }
    }
}

void temp::addBook() {
    cout << "\nEnter Book's ID :: ";
    getline(cin, id);

    cout << "Enter Book Name :: ";
    getline(cin, name);

    cout << "Enter Book's Author Name :: ";
    getline(cin, author);

    file.open("bookData.txt", ios::out | ios::app);
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    file << id << "*" << name << "*" << author << endl;
    file.close();

    cout << "Book Added Successfully!\n";
}

void temp::showAllBook() {
    file.open("bookData.txt", ios::in);
    if (!file) {
        cout << "No book data found!" << endl;
        return;
    }

    cout << "\n\n";
    cout << "\t\tBook ID\t\t\tBook Name\t\t\tAuthor's Name\n";
    cout << "\t\t---------------------------------------------------------------\n";

    while (getline(file, id, '*') && getline(file, name, '*') && getline(file, author, '\n')) {
        cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << author << endl;
    }

    file.close();
}

void temp::extractBook() {
    showAllBook();

    cout << "\nEnter Book ID to Extract :: ";
    getline(cin, search);

    file.open("bookData.txt", ios::in);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    bool found = false;

    while (getline(file, id, '*') && getline(file, name, '*') && getline(file, author, '\n')) {
        if (search == id) {
            cout << "\n\tBook Found:\n";
            cout << "\t\tBook ID\t\t\tBook Name\t\t\tAuthor's Name\n";
            cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << author << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with ID '" << search << "' not found!" << endl;
    } else {
        cout << "Book Extracted Successfully!\n";
    }

    file.close();
}


// Print Numbers from 1 to 10
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    return 0;
}







// Sum of Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}









// Reverse a Number
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}














// Menu-Driven Calculator
#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    while (true) {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) break;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4: 
                if (b != 0)
                    cout << "Result: " << a / b << endl;
                else
                    cout << "Division by zero error!" << endl;
                break;
            default: cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}






// Password Validation with Attempts
#include <iostream>
using namespace std;

int main() {
    string correctPassword = "cpp123";
    string input;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter password: ";
        cin >> input;

        if (input == correctPassword) {
            cout << "Access granted!" << endl;
            break;
        } else {
            attempts--;
            cout << "Incorrect password. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0)
        cout << "Access denied. No attempts left." << endl;

    return 0;
}

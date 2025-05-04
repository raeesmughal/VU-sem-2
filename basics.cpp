#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}




// Take User Input and Print It
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    return 0;
}




// Add two Numbers
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = a + b;
    cout << "Sum = " << sum << endl;
    return 0;
}




// Check odd even
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}







// basic calculator
#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(op) {
        case '+': cout << "Result = " << a + b; break;
        case '-': cout << "Result = " << a - b; break;
        case '*': cout << "Result = " << a * b; break;
        case '/': cout << "Result = " << a / b; break;
        default: cout << "Invalid operator";
    }

    return 0;
}











// Print Numbers from 1 to 10 Using Loop

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}




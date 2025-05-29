#include <iostream>
#include <cmath> // For M_PI (value of Pi)
using namespace std;

int main() {
    int choice;
    float area;

    cout << "Area Calculator" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1: {
            float radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;
        }
        case 2: {
            float length, width;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area << endl;
            break;
        }
        case 3: {
            float base, height;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

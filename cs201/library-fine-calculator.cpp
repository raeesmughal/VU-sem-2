#include <iostream>
using namespace std;

int main() {
    string name = "Raees Mughal";
    string libraryID = "LIB2025RM";

    cout << "Name: " << name << endl;
    cout << "Library ID: " << libraryID << endl;

    // User Input: Number of books issued and their late return days
    int booksIssued;
    cout << "\nHow many books have you issued? ";
    cin >> booksIssued;

    int totalFine = 0;
    int lateDays;

    cout << "\nEnter late return days for each book:" << endl;
    for (int i = 1; i <= booksIssued; i++) {
        cout << "Book " << i << " late days: ";
        cin >> lateDays;

        int fine = 0;

        if (lateDays <= 0) {
            fine = 0;
        } else if (lateDays <= 5) {
            fine = lateDays * 10; // Rs.10 per day
        } else if (lateDays <= 10) {
            fine = (5 * 10) + (lateDays - 5) * 20; // Rs.20 per day after 5 days
        } else {
            fine = (5 * 10) + (5 * 20) + (lateDays - 10) * 50; // Rs.50 per day after 10 days
        }

        cout << "Fine for Book " << i << ": Rs. " << fine << endl;
        totalFine += fine;
    }

    // Discount for regular members
    char isMember;
    cout << "\nAre you a regular member? (y/n): ";
    cin >> isMember;

    float discount = 0;
    if (isMember == 'y' || isMember == 'Y') {
        discount = totalFine * 0.15; // 15% discount
        cout << "\nGreat! You get a 15% discount on your total fine." << endl;
    }

    float netFine = totalFine - discount;

    // Final Bill
    cout << "\n==== Library Fine Summary ====" << endl;
    cout << "Total Fine: Rs. " << totalFine << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "Net Payable Fine: Rs. " << netFine << endl;

    cout << "\nPlease pay your dues at the front desk." << endl;
    cout << "Thank you for using the Library System!" << endl;

    return 0;
}

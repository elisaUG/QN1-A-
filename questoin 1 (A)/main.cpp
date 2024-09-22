#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool is_leap_year(unsigned int Y) {
    // Check if it's a century year (divisible by 100)
    if (Y % 100 == 0) {
        // It's a leap year if divisible by 400
        return (Y % 400 == 0);
    } else {
        // For non-century years, it's a leap year if divisible by 4
        return (Y % 4 == 0);
    }
}

int main() {
    unsigned int year;

    // Prompt the user to enter a year
    cout << "Enter a year: ";
    cin >> year;

    // Check if it's a leap year
    if (is_leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

/*
    Lab 2
    Additional Features in C++
    Inline functions
    5.  Assume that employee will have to pay 10 percent income tax to the government.
        Ask user to enter the employee salary. Use inline function to display the net
        payment to the employee by the company.
*/

#include <iostream>

// Inline function to calculate net payment after deducting 10% income tax
inline float calculateNetPayment(float salary) {
    return 0.9 * salary; // 10% deduction for income tax
}

int main() {
    float salary;

    std::cout << "Enter the employee's salary: ";
    std::cin >> salary;

    // Calculate net payment using the inline function

    // Display the net payment to the employee by the company
    std::cout << "\nNet payment is: NRP" << calculateNetPayment(salary) << std::endl;

    return 0;
}

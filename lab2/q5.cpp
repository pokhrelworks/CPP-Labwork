#include <iostream>

// Inline function to calculate net payment after deducting 10% income tax
inline float calculateNetPayment(float salary) {
    return 0.9f * salary; // 10% deduction for income tax
}

int main() {
    float salary;

    std::cout << "Enter the employee's salary: ";
    std::cin >> salary;

    // Calculate net payment using the inline function
    float netPayment = calculateNetPayment(salary);

    // Display the net payment to the employee by the company
    std::cout << "\nNet payment is: NRP" << netPayment << std::endl;

    return 0;
}

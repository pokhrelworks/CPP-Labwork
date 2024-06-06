/*
    Lab 2
    Additional Features in C++
    Reference variable and return by reference
    4.  Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
*/
#include <iostream>

// Function to set the larger of two temperatures to a value entered by the user
float &setLargerTemperature(float &temp1, float &temp2)
{
    return (temp1 > temp2) ? temp1 : temp2;
}

int main()
{
    float temp1, temp2;

    std::cout << "Enter the first temperature: ";
    std::cin >> temp1;

    std::cout << "Enter the second temperature: ";
    std::cin >> temp2;

    float newValue;
    std::cout << "\nEnter the new value: ";
    std::cin >> newValue;

    std::cout << "\nBefore\n";
    std::cout << "Temp1 = " << temp1 << std::endl;
    std::cout << "Temp2 = " << temp2 << std::endl;

    // Set the larger temperature to the new value
    setLargerTemperature(temp1, temp2) = newValue;

    std::cout << "\nAfter\n";
    std::cout << "Temp1 = " << temp1 << std::endl;
    std::cout << "Temp2 = " << temp2 << std::endl;

    return 0;
}

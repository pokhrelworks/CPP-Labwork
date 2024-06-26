/*
    Lab 2
    Additional Features in C++
    Manipulators
    1.  Write a program to set a structure to hold a date (mm,dd and yy),
        assign values to the members of the structure and print out the values in the format
        11/28/2004 by function. Pass the structure to the function
*/

#include <iostream>
#include <iomanip> // for setfill and setw

struct Date
{
    int year, month, day;
};

// Function to get date input from user
Date getDateFromUser()
{
    Date d;

    std::cout << "Enter the year (e.g., 2024): ";
    std::cin >> d.year;

    std::cout << "Enter the month (1-12): ";
    std::cin >> d.month;

    std::cout << "Enter the day (1-31): ";
    std::cin >> d.day;

    return d;
}

// Function to print date in the specified format
void printDate(Date d)
{
    std::cout << "\nDate: ";

    // Set max width of month and day to 2 and add leading zeros if necessary
    // e.g., 7 -> 07, 11 -> 11
    std::cout << std::setfill('0') << std::setw(2) << d.month << '/'
              << std::setfill('0') << std::setw(2) << d.day << '/'
              << d.year << std::endl;
}

int main()
{
    Date d = getDateFromUser();
    printDate(d);
    return 0;
}

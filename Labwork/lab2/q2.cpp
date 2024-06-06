/*
    Lab 2
    Additional Features in C++
    Function overloading
    2.  Write a program using the function overloading that converts feet to inches. Use function with no argument,
        one argument and two arguments. Decide yourself the types of arguments.
        Use pass by reference in any one of the function above.
*/

#include <iostream>

// calculateinch with return type void and without any parameter
void calculateinch()
{
    std::cout << "\n1foot = 12inches" << std::endl;
}

// calculateinch with return type and parameter int
int calculateinch(int ft)
{
    return ft * 12;
}

// calculateinch with return type int and parameters int& and int&
int calculateinch(int &ft, int &inches)
{
    return ft * 12 + inches;
}

int main()
{
    int ft, inches;

    std::cout << "Enter feet: ";
    std::cin >> ft;

    std::cout << "Enter inches: ";
    std::cin >> inches;

    calculateinch();
    std::cout << ft << "ft = " << calculateinch(ft) << "inches" << std::endl;
    std::cout << ft << "ft " << inches << "inches = " << calculateinch(ft, inches) << std::endl;

    return 0;
}

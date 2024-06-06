#include <iostream>

namespace Square
{
    int num;

    int foo(int num)
    {
        return num * num;
    }
}

namespace Cube
{
    int num;

    int foo(int num)
    {
        return num * num * num;
    }
}

int main()
{
    // Access variable using scope resolution operator (::)
    // Syntax: namespace_name::identifier
    Square::num = 5;
    Cube::num = 7;

    // ::foo is used to access the function of the respective namespace
    std::cout << Square::num << "^2 = " << Square::foo(Square::num) << std::endl;
    std::cout << Cube::num << "^3 = " << Cube::foo(Cube::num) << std::endl;

    return 0;
}

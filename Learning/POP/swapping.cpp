#include <iostream>

void swap(int& x, int& y) {
    if (&x != &y) {
        x ^= y;
        y ^= x;
        x ^= y;
    }
}

int main() {
    int a = 10, b = 20;

    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    swap(a, b);

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}

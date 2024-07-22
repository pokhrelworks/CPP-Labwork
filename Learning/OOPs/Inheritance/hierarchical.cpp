#include <iostream>
using namespace std;

class A {
protected:
    int x;
public:
    void input() {
        cout << "Enter any number for x: ";
        cin >> x;
    }
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

class B : public A {
    int y;
public:
    void getdata() {
        cout << "Enter any number for y: ";
        cin >> y;
    }
    void putdata() {
        cout << "Addition of x and y: " << x + y << endl;
    }
};

class C : public A {
    int z;
public:
    void getdata() {
        cout << "Enter any number for z: ";
        cin >> z;
    }
    void putdata() {
        cout << "Multiplication of x and z: " << x * z << endl;
    }
};

int main() {
    B objB;
    objB.input(); // Input x through class A
    objB.getdata(); // Input y through class B
    objB.putdata(); // Output addition of x and y

    C objC;
    objC.input(); // Input x through class A
    objC.getdata(); // Input z through class C
    objC.putdata(); // Output multiplication of x and z

    return 0;
}

//This is for the structure in c++ language

#include<iostream>
//This way you don't need to insert namespace for every commands
//using namespace std;
#define pi 3.84
int r=2;
void area(); //This is declearation of area() function

class MyClass{
    public:
    int a;
    void display(){
        std::cout<<"inside class"<<std::endl;
    }
};
int main()
{
    MyClass m;
    m.a =90;
    m.display();
    area();
    std::cout<<"Hello world from the main function"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;
}

void area()
{
    float area;
    area = pi*r*r;
    std::cout<<area<<std::endl;
}
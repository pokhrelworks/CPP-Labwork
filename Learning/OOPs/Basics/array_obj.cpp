#include <iostream>
class Add{
    private:
        int a, b;
    public:
    void getdata(){
        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;
    }
    void putdata(){
        std::cout << "Sum of two numbers is: " << a+b << std::endl;
    }   
};

int main(){
    Add obj[10];
    obj[1].getdata();
    obj[1].putdata();
    obj[2].getdata();
    obj[2].putdata();
    obj[3].getdata();
    obj[3].putdata();
    obj[4].getdata();
    obj[4].putdata();
    obj[5].getdata();
    obj[5].putdata();
    obj[6].getdata();
    obj[6].putdata();
    return 0;
}   
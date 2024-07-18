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
    Add obj;
    obj.getdata();
    obj.putdata();
    return 0;
}   
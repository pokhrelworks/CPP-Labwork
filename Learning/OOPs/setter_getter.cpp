#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;

public:
    // Setter Functions
    void setname(string x)
    {
        name = x;
    }
    void setroll_no(int roll)
    {
        roll_no = roll;
    }

    // Getter Functions
    void getname()
    {
        cout << name;
    }
    void getroll_no()
    {
        cout << roll_no;
    }
};

int main()
{

    Student s1;
    s1.setname("Ankit");
    s1.setroll_no(20);
    s1.getname();
    s1.getroll_no();
    return 0;
}
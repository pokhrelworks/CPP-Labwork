#include<iostream>;
using namespace std;

class Student {
    public:
    int roll_no;
    string name;
};

int  main(){
    Student s1;
    s1.name = "Ankit";
    s1.roll_no = 20;
    cout<<s1.name<<" "<< s1.roll_no;

    return 0;
}

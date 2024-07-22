#include<iostream>
#include<string>

using namespace std;

class A{
    protected:
    string name;
    public:
    void input()
    {
        cout<<"\nEnter your name";
        cin>>name;
    }
};
class B: public A{
    protected:
    int roll;
     public:
    void inputroll()
    {
        cout<<"\nEnter your roll";
        cin>>roll;
    }    
};

class C : public B{
    protected:
    string add;
    public:
    void inputadd()
    {
        cout<<"\nEnter your address";
        cin>>add;
    }
      void showdetail()
    {
        cout<<name;
        cout<<"\n"<<add;
        cout<<"\n"<<roll;
    }
};

int main()
{
    C aa;
    aa.input();
    aa.inputroll();
    aa.inputadd();
    aa.showdetail();
    return 0;
}
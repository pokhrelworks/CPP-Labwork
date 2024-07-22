#include<iostream>

using namespace std;

class A{
    protected:
    int x;
    public:
    void input()
    {
        cout<<"\nEnter any number";
        cin>>x;
    }
};


using namespace std;

class B{
    protected:
    int y;
    public:
    void getdata()
    {
        cout<<"\nEnter any number";
        cin>>y;
    }
};


using namespace std;

class C : public A,public B{
    public:
    void sum()
    {
        cout<<x+y;
    }
};

int  main(){
    C aa;
    aa.getdata();
    aa.input();
    aa.sum();
    return 0;
}
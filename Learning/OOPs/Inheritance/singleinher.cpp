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
class B : public A{
   int y;
   public:
   void getdata()
   {
    cout<<"\nEnter value of y";
    cin>> y;
   }
   void putdata()
   {
    cout<<"\nAddition: "<<x+y;
   }
};

int main()
{
    A aa;
    B bb;
    bb.input();
    bb.getdata();
    bb.putdata();
    return 0;
}


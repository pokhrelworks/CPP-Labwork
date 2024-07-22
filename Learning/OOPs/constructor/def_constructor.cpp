#include<iostream>
using namespace std;

class Test{
    int a,b;
   public:
    Test(){
        a=10;
        b=20;
    };
    void putdata(){
        cin>>a>>b;
    }
    void getdata(){
        cout<<a+b;
    }
};

int main()
{
    Test aa;
    aa.getdata();
    
    Test bb;
    bb.putdata();
    bb.getdata();
    // aa.putdata();
}
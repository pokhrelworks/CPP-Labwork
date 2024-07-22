

#include<iostream>
using namespace std;

class Test{
    int a,b;
   public:
    Test(int x=9,int y=10){
        a=x;
        b=y;
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
    
    Test bb(2,5);
    bb.getdata();
    // aa.putdata();
}
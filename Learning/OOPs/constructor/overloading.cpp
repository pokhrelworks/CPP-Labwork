#include<iostream>
using namespace std;

class sum {
    int x,y,z,w;
    public:
    sum(int a,int b,int c, int d){
        x=a;
        y=b;
        z=c;
        w=d;
    }
    sum(int a,int b){
        x=a;
        y=b;
    }
    void sumofnum()
    {
        cout<< x+y ;
    }
    void sumofcomplex()
    {
        cout<< x+z << "+"<< y+w <<"i\n" ;
    }

};

int main()
{
    sum aa(5,3,2,4);
    sum bb(12,13);
    aa.sumofcomplex();
    bb.sumofnum();
    return 0;
}
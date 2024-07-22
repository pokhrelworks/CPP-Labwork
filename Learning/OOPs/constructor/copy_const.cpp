#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    test(){
        a=10;
        b=20;
    }
    test (test &z){
        a=z.a;
        b=z.b;
    }

   void getdata(){
    cout << a+b;
   }

};

int main(){

    test aa;
    test bb(aa);
    test cc=aa;
    aa.getdata();
    bb.getdata();
    cc.getdata();
    return 0;
}
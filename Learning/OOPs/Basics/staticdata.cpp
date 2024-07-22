#include <iostream>
using namespace std;

class test{

    int a,b;
    static int c;
    public:
        void getdata(int x, int y){
            a=x;
            b=y;
            c=c+1;
        }
        void putdata()
        {
            cout << a << b << c;
        }
};


int test::c;
int main(){
    test aa,bb;
    aa.getdata(2,3);
    bb.getdata(6,7);
    aa.putdata();
    bb.putdata();
    return 0;

}
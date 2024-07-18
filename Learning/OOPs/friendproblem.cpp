#include<iostream>
using namespace std;

class test2;
class test1{
int num1;
public:
void getdata(){
    cin>>num1;
}
friend int check(test1,test2);
};

class test2{
    int num2;
    
    public:
    void getdata(){
        cin>>num2;
    }
friend int check(test1,test2);
};

int check(test1 aa, test2 bb){
    return (aa.num1 > bb.num2);
}

int main()
{
    test1 aa;
    test2 bb;
    aa.getdata();
    bb.getdata();
    cout << check(aa,bb);
}
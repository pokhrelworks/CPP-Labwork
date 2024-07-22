#include <iostream>
using namespace std;

class Add {
    private:
    int a ,b;
    public:
    void getdata();
    friend int sum(Add aa);

};

void Add :: getdata(){
    cin>>a>>b;
}

int sum(Add aa)
{
    return (aa.a + aa.b);
}

int main()
{
    Add aa;
    aa.getdata();
    cout << sum(aa) ;
}
#include<iostream>
using namespace std;

struct Secret {
    int password;
    public:
    void secretmessage(int password)
    {
        if(password == 2 || password == 1) 
        {
            cout << "Tum 3 hok bhi pitkar aaya?";
        }
        else {
            cout << "Toh fir thik hai!";
        }
    }
    
};

int main()
{
    Secret msg ;
    cout<< "Kitne aadmi thy kaliya: ";
    cin >> msg.password;
    msg.secretmessage(msg.password);
    return 0;
}
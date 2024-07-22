#include <iostream>
#include <string>
using namespace std;

class privatedata
{
    string name;
    public:
    privatedata(string nam)
    {
        name = nam;
        cout << "Name: " << name << endl;
    }
    ~privatedata()
    {
        cout << "DataBase Erased" << endl;
    }
};

int main()
{
    int pass;
    cout << "Enter the password: ";
    cin >> pass;
    if (pass == 123)
    {
        string name;
        cout << "Enter the name: ";
        cin >> name;
        privatedata aa(name);
    }
    return 0;
}

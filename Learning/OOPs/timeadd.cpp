#include <iostream>
using namespace std;

class Time{
    // private:
    public:
    int hr,min;
    void getdata(){
        cout << "Enter the time in hours and minutes: ";
        cin >> hr >> min;
    }
    void sum(Time t1, Time t2){
        hr = t1.hr + t2.hr;
        min = t1.min + t2.min;
        if(min >= 60){
            hr++;
            min -= 60;
        }
    }
    void putdata(){
        cout << "Time is: " << hr << " hours and " << min << " minutes." << endl;
    }
};

int main(){
    Time t1,t2,t3;
    cout << t1.hr << endl;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    t3.putdata();
    return 0;
}
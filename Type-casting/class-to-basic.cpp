#include <iostream>
using namespace std;

class Time {
    int hours, min;

    public : 
    Time(int,int);
    operator int();
    ~Time() {
        cout<< "Destructor called..."<< endl;
    }

};

Time::Time(int h, int m) {
    cout<< "constructor called with two parameters"<<endl;
    hours = h;
    min = m;
}

Time::operator int() {
    cout<< "class type to basic type conversion"<<endl;
    return (hours*60 + min);
}

int main() {

    int a, b, duration;
    cin>> a >>b;

    Time t1(a,b);
    duration = t1;
    cout<< "The duration is: "<<duration<<endl;

    cout<< "Second method operator overloading";

    duration = t1.operator int();

    cout<< "total minutes are : "<< duration;
    
    return 0;
}
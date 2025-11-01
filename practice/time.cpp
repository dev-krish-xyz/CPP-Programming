#include <iostream>
using namespace std;

class Time {
    private: 
    int hours, minutes, seconds;
    
    public:
    void getTime(){
        cin>> hours >> minutes >> seconds;
    }
    void setTime(){
        hours = hours;
        minutes = minutes;
        seconds = seconds;
    }
    friend Time addTime(Time t1, Time t2);

    void display() {
        cout<< hours << ":" <<minutes <<":"<< seconds;
    }
};

Time addTime(Time t1, Time t2){
    Time temptime;
    temptime.hours = t1.hours + t2.hours;
    temptime.minutes = t1.minutes + t2.minutes;
    temptime.seconds = t1.seconds + t2.seconds;
    return temptime;
}

int main() {
    Time t1, t2;
    cout<<"enter the first time"<<endl;
    t1.getTime();
    t1.setTime();
    cout<<"enter the second time"<<endl;
    t2.getTime();
    t2.setTime();


    cout<< "the first time is : ";
    t1.display();
    cout<< "the second time is : ";
    t2.display();

    cout<<"sum of the time"<<endl;
    Time timesum = addTime(t1, t2);
    timesum.display();




    return 0;
}
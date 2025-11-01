#include <iostream>
using namespace std;

class Counter {
    int value;
    static int totalObj;

    public: 
    Counter(int v) : value(v){
        totalObj++;
    }

    static void showTotal() {
        cout<<"total objs: "<<totalObj<<endl;
        //cout<<value;  : error cant access not-static data
    }
};

int Counter::totalObj = 2;

int main() {
    Counter c1(10), c2(20);

    Counter::showTotal(); // call using direct class
    c1.showTotal();  // call using obect allowed but not reccomended

    return 0;
}
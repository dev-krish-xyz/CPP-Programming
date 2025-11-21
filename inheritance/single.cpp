#include <iostream>
using namespace std;

class Device {
    public:
    Device() {
        cout<< "THis is a device"<<endl;
    }
};

class Computer:public Device{
    public : 
    Computer() {
        cout<< "This is a computer";
    }
};
int main() {
    Computer obj;  
    return 0;
}
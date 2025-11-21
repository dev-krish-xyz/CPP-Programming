#include <iostream>
using namespace std;

class Device {
    public: 
    Device() {
        cout<< "This is a device"<<endl;
    }
};

class Computer {
    public: 
    Computer() {
        cout<< "This is a computer"<<endl;
    }
};

class LinuxOS:public Device, public Computer {

};

int main() {
    LinuxOS arch;
    
    return 0;
}
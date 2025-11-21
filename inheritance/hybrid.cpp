#include <iostream>
using namespace std;

class Device {
    public: 
    Device () {
        cout<<"this is a device"<<endl;
    }
};

class Computer {
    public : 
    Computer() {
        cout<<"This is a computer"<<endl;
    }
};

class LinuxBased: public Computer, public Device {
    public: 
    LinuxBased() {
        cout<<"I am on linux"<<endl;
    }
};

class Arch : public LinuxBased {
    public : 
    Arch() {
        cout<<"This is the arch distro"<<endl;
    }
};

class WindowsBased: public Computer, public Device {
    public : 
    WindowsBased() {
        cout<<"I am on windows";
    }
};

int main() {
    LinuxBased c1;
    Arch a1;
    WindowsBased w1;
    
    return 0;
}
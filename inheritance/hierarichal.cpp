#include <iostream>
using namespace  std;
class Device {
    public: 
    Device () {
        cout<<"this is a device"<<endl;
    }
};

class Computer: public Device {
    public : 
    Computer() {
        cout<<"This is a computer"<<endl;
    }
};

class LinuxBased: public Computer {
    public: 
    LinuxBased() {
        cout<<"I am on arch linux"<<endl;
    }
};

class WindowsBased: public Computer {
    public : 
    WindowsBased() {
        cout<<"I am on windows";
    }
};

int main() {
    Computer c1;
    LinuxBased l1;
    WindowsBased w1;
    
    return 0;
}
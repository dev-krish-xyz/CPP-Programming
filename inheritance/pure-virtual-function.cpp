#include <iostream>
using namespace std;

class Vehicle{
    public:
    virtual void start() = 0;   // pure virtual function
    
    virtual ~Vehicle() = 0;  // pure virtual destructor

};
Vehicle::~Vehicle () {

    cout<< "Vehicle Pure virtual destructor called"<<endl;
}

class Car : public Vehicle {
    public : 
    void start () override {
        cout<< "Car starts at 2000 RPM"<<endl;
    }

    ~Car () {
        cout<< "Car destructor called"<<endl;
    }
};

class Bike : public Vehicle {
    public :
    void start() override {
        cout<< "Bike starts"<<endl;
    }
    ~Bike() {
        cout<< "Bike destructor called"<<endl;
    }

};

int main() {

    Vehicle* v;
    Car bmw;

    v = &bmw;
    v->start();

    Bike jawa;
    v = &jawa;
    v->start();
    
    return 0;
}
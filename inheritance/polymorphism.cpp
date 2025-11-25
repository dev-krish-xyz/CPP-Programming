#include <iostream>
using namespace std;

class Shape {
    public :

    virtual void calculate() {
        cout<< "Calculate the shape"<<endl;
    }

    virtual ~Shape() {
        cout<< "Virtual Shape destructor called"<<endl;
    }

};

class Circle : public Shape {
    public: 
    void calculate() override {
        int a = 5 ;
        int b = 6;
        cout<< "Area of circle is : "<< a*b<<endl;
    }

    ~Circle() {
        cout<< "Circle destructor called"<<endl;
    }
};

class Rectangle: public Shape {
    public: 
    void calculate() override {
        int a = 1, b = 2, c = 3;
        cout<< "Area of Rectangle is : "<<a*b*c<<endl;
    }

    ~Rectangle() {
        cout<< "Rectangle destructor called"<<endl;
    }


};

int main () {
    Shape* s;
    Circle c;

    s = &c;
    s->calculate();

    Rectangle r;
    s = &r;
    s->calculate();


    return 0;
}

// Destructor called in LIFO 
#include <iostream>
using namespace std;

class Shape {
    public :
    virtual void draw() {
        cout<< "Drawing the shapes"<<endl;
    }


};

class Circle : public Shape {
    public : 
    void draw() override {
        cout<< "Drawing circle"<<endl;
    }
};

int main() {
    Shape* s = new Circle();

    s->draw(); //calls Circle::draw() -> decides at runtime
    
    return 0;
}
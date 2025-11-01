#include <iostream>
using namespace std;
#define PI 3.141

class Circle {
    int r;
    public: 
     Circle(int radius){
          r =radius;
     }
     float returnArea() {
        return PI * r * r;
     }
     
};

int main() {
    Circle c1(20);
    cout<<"the area of circle is = "<<c1.returnArea();

    return 0;

}
#include <iostream>
using namespace std;

class Circle {
    private: 
    int r;
    int a;
    public:
    void getValue() {
        cout<<"enter radius"<<endl;
        cin>>r;
        } 

    float calc(){
        return 3.141 * r * r;
    }

    void display () {
        cout << " the area of the circle is = "<< calc();
    }
    


};

int main() {
    Circle c1;
    c1.getValue();
    c1.display();


    return 0;
}

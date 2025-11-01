#include <iostream>
using namespace std;
class B;

class A {
    int val1;
    public:
    A(int x) {
        val1 = x;
    }

    friend int smallest(A a, B b);

};

class B {
    int val2;
    public:
    B (int y) {
        val2 = y;
    }

    friend int smallest(A a , B b);
};

int smallest (A a , B b) {
    if (a.val1 > b.val2 ) {
        return b.val2;
    }
    else {
        return a.val1;
    }
}

int main (){
    A obj1(10);
    B obj2(20);

    cout<<" the smallest  number is " << smallest(obj1, obj2);

    return 0;
}


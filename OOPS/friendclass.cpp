#include <iostream>
using namespace std;

class B;
class A {
    private: 
    int numA;
    friend class B;  // class A members are accessible inside the class B 

    public : 
    A() : numA(12) {}
};

class B {
    private: 
    int numB;

    public: 
    B() : numB(10) {}

    int add () {
        class A objectA;
        return objectA.numA + numB;
    }

  
};

int main() {
    class B objectB;
    cout<< "sum : "<< objectB.add();
    return 0;
}
// Compile time polymorphisim

#include <iostream>
using namespace std;

class Math {
    public:
    int add(int a , int b) {
        return a+b;
    }
    double add(double a, double b) {
        return a+b;
    }
};

int main() {
    Math m;
    m.add(2, 3);   // calls the first
    m.add(3.4, 4.4);  // calls the second

    return 0;
}

// compiler decides which add() to call just by looking at the arguments


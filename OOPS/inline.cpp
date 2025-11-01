#include <iostream>
using namespace std;

class Multiplier {
    public: 
    int multiply (int a, int b) {
        return a*b;
    }

    int nonInlineMultiply (int x, int y);
};

int Multiplier::nonInlineMultiply (int x, int y) {
    return x*y;
}

int main () {
    Multiplier multiObj;
    cout<<multiObj.multiply(2,3)<<endl;
    cout<<multiObj.nonInlineMultiply(4,5)<<endl;

    return 0;
}
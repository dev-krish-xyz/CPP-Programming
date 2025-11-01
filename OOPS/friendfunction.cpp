#include <iostream>
using namespace std;
/

class Box {
private:
    int width = 10;
public:
    friend void printWidth(Box b); // friend function
};

void printWidth(Box b) {
    cout << b.width;  // ✅ allowed
}

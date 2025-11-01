#include <iostream>
using namespace std;

class Myclass{
    int *ptr;
    public:
    Myclass(int value) {
        ptr = new int(value);
    }
    void show() {
        cout << *ptr <<endl;
    }
    ~Myclass() {
        cout<< "Pointer memory deallocated"<<endl;
        delete ptr;
        ptr = nullptr;
    }
};


int main() {
    Myclass c1(10);
    c1.show();
    return 0;
}

// why do we need to allocate memory in runtime rather than compile time
// size determined at run time
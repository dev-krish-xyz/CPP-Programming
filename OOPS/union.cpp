#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;
    d.i = 42;          // store integer
    cout << d.i << endl;

    d.f = 3.14;        // overwrites same memory
    cout << d.f << endl;

    d.c = 'A';         // overwrites again
    cout << d.c << endl;

    cout << sizeof(Data) << endl; // size = largest member (here float = 4 bytes)
}

#include <iostream>
using namespace std;

int main() {

    int a = 10;
    float b = 20;
    void *p = &a;
    void *p1;
    p1 = &b;
    cout << *(int*)p << endl;
    cout << *(float*)p1 << endl; // must typecast before dereferencing


    return 0;
}
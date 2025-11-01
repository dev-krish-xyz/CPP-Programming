#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;

    cout << a <<endl;
    cout << ref<< endl;

    ref = 20;
    cout << a<< endl;

    // pointer vs reference variable

    int x = 10;
    int *ptr = &x;
    int& y = x;

    cout << &ptr <<endl;  // adress of pointer itself
    cout << &y <<endl;  // adress of original variable x
    cout << y <<endl;  // another name for x, but in the same memory adress
    

    return 0;
}


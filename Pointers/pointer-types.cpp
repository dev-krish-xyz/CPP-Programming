#include <iostream>
using namespace std;

void createDanglingPointer()
{
    int *ptr = new int(10);
    cout << "value: " << *ptr<<endl;
    delete ptr;
}

void createWildPointer(){
    int *p;
    cout << p<<endl;
}

void pointerToSingleValue() {
    int *p1 = new int(10);
    cout << p1<<endl;  // no variable for 10, 10 is directly stored in the adress allocated by p
    cout << *p1<<endl;
    delete p1;  // memory deallocated
    p1 = nullptr;
    // p1 = 0;
    // p1 = NULL;  // these are also valid
    cout << p1<<endl;
}

int main()
{
    createDanglingPointer();
    createWildPointer();  // prints garbage value
    pointerToSingleValue();

    return 0;
}
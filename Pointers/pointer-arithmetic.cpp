#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    cout << p2 <<endl;
    cout << p1+1 <<endl;  // same
    cout << p1++ <<endl;

    cout << p3 <<endl;
    cout << p1 + 2<<endl; //same

    cout << p1 <<endl;
    cout << p3 -2<<endl;  //same

    cout << p2 << endl;
    cout << p3 -1 <<endl;  //same
    cout << p3--<<endl;

    cout << p3 - p1 <<endl;  // no of elements between them
    cout << p1 - p3 <<endl;

    double arr[3] = {1.1, 2.1, 3.1};
    double *ptr = arr;

    cout << "p points to: "<< *ptr<<endl;
    ptr++;
    cout<< "p points to: " << *ptr <<endl;

    int num = 45;
    int *ptr1 = &num;
    int *ptr2 = ptr1 + 4;

    cout << ptr2 - ptr1;   // also returns the elements between them not bytes

    // comparision of pointers

    if(ptr1 == ptr2) {
        cout<< "same location"<<endl;
    }
    else {
        cout<< "different location";
    }

    

    return 0;
}
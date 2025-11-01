#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int b,c;
    int *p;
    int a = 10;
    p = &a;
    
    const int * ptr;
    ptr = &a;
// *ptr = 10  (cant do this cuz of const)

    const int* const p1 = &a;
//    *p1 = 10; (wrong)
//    p1 = &b; (wrong)


// the size remails same for the all types of pointer (8 bytes)
    double a2;
    double *p2 = &a2;
    cout <<sizeof(p2)<<endl;

    float a3;
    float *p3 = &a3;
    cout << sizeof(p3)<<endl;

    cout << p<<endl;   
    cout<< *p<< endl;
    cout << a<< endl; 
    cout << &p <<endl;
    cout<< sizeof(p)<<endl;
    cout << sizeof(int) << endl;

    cout << reinterpret_cast<uintptr_t>(p)<<endl;
    cout << reinterpret_cast<uintptr_t> (&p)<< endl;




    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;
    
    cout << a <<endl;
    cout << p <<endl;
    cout << *p << endl;
    cout << **pp << endl;
    cout << ***ppp << endl;

    return 0;
}